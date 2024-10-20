//LIBRARY(Functions)
#include <stdio.h>

int getInput(int *bookID, int *dueDate, int *returnDate);
int calculateOverdue(int dueDate, int returnDate);
int calculateFine(int overDue);
int displayResults(int bookID, int dueDate, int returnDate, int overDue, int fineAmount);

int main() {
    int bookID, dueDate, returnDate, overDue, fineAmount;

    getInput(&bookID, &dueDate, &returnDate);
    overDue = calculateOverdue(dueDate, returnDate);
    fineAmount = calculateFine(overDue);
    displayResults(bookID, dueDate, returnDate, overDue, fineAmount);

    return 0;
}

int getInput(int *bookID, int *dueDate, int *returnDate) {
    printf("Enter the book ID: ");
    scanf("%d", bookID);
    
    printf("Enter the due date: ");
    scanf("%d", dueDate);
    
    printf("Enter the return date: ");
    scanf("%d", returnDate);
    
    return 0; // Returning an integer to comply with function signature
}

int calculateOverdue(int dueDate, int returnDate) {
    return returnDate - dueDate;
}

int calculateFine(int overDue) {
    int fineAmount;

    if (overDue <= 7) {
        fineAmount = 20 * overDue;
        printf("Your fine rate is Ksh 20 per day.\n");
    } else if (overDue <= 14) {
        fineAmount = (7 * 20) + ((overDue - 7) * 50);
        printf("Your fine rate is Ksh 20 per day for the first 7 days then Ksh 50 per day.\n");
    } else {
        fineAmount = (7 * 20) + (7 * 50) + ((overDue - 14) * 100);
        printf("Your fine rate is Ksh 20 per day for the first 7 days, Ksh 50 per day for the second 7 days then Ksh 100 per day.\n");
    }

    return fineAmount;
}

int displayResults(int bookID, int dueDate, int returnDate, int overDue, int fineAmount) {
    printf("The Book ID is: %d\n", bookID);
    printf("The Due date is: %d\n", dueDate);
    printf("The Return Date is: %d\n", returnDate);
    printf("The days overdue are %d\n", overDue);
    printf("The fine amount is: Ksh %d\n", fineAmount);

    return 0; // Returning an integer to comply with function signature
}