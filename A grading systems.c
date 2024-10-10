// A grading system
#include <stdio.h>

int main() {
    int math, english, cre, average, sum;

    printf("Enter the marks for Math: ");
    scanf("%d", &math);

    printf("Enter the marks for English: ");
    scanf("%d", &english);

    printf("Enter the marks for CRE: ");
    scanf("%d", &cre);

    sum = math + english + cre;
    average = sum / 3;
    printf("Your Average marks is %d\n", average);

    if (average >= 70) {
        printf("A\n");
    } else if (average >= 60) {
        printf("B\n");
    } else if (average >= 50) {
        printf("C\n");
    } else if (average >= 40) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}