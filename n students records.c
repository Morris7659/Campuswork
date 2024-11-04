//n Students records
#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *file;
char names[50];
int marks;
int n;

printf("Enter the number of students: ");
scanf("%d",&n);
getchar();// this clears a new line character from input

file=fopen("student.txt","a");
if (file==NULL){
    printf("Error opening the file!!");
    return 1;
}
for (int i=0;i<n;i++){
    printf("Enter the name of the student: \n",i+1);
    fgets(names,sizeof(names),stdin);

    printf("Enter the marks of the student: \n",i+1);
    scanf("%d",&marks);
    getchar();//clears newline character in input

    fprintf(file,"Student %d: Name: %s Marks: %d",i+1, names, marks);

}
fclose(file);
printf("Data written successfully.");
return 0;
}
