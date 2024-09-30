//Calculating fine for overdue books
#include <stdio.h>
int main(){
    int bookID, dueDate, returnDate, overDue, fineAmount;

    printf("Enter the book ID:");
    scanf("%d",&bookID);

    printf("Enter the due date:");
    scanf("%d",&dueDate);

    printf("Enter the return date:");
    scanf("%d",&returnDate);

    overDue=returnDate-dueDate;
    printf("The Book ID is: %d\n",bookID);
    printf("The Due date is: %d\n",dueDate);
    printf("The Return Date is: %d\n",returnDate);
    printf("The days overdue are %d\n",overDue);

    if (overDue <=7){
        fineAmount=20*overDue;
        printf("Your fine rate is Ksh 20 per day.");
        printf("The fine amount is: %d\n",fineAmount);    
    }else if (overDue <=14){
        fineAmount=(7*20)+((overDue-7)*50);
        printf("Your fine rate is Ksh 20@day for the first 7 days then Ksh 50 per day.");
        printf("The fine amount is: %d\n",fineAmount);
    }else{
        fineAmount=(7*20)+(7*50)+((overDue-14)*100);
        printf("Your fine rate is Ksh 20@day for the first 7 days, Ksh50@day for the second 7 days then Ksh 100 per day.");
        printf("The fine amount is: %d\n",fineAmount);
    }



return 0;
}