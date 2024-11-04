#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

// Define a structure for Student
struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    FILE *file;
    int n;

    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);
    getchar(); // Clear newline character from input buffer

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        getchar(); // Clear newline character from input buffer
    }

    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);

    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Student read_students[MAX_STUDENTS];

    fread(read_students, sizeof(struct Student), n, file);
    fclose(file);

    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Name: %s, Marks: %d\n", i + 1, read_students[i].name, read_students[i].marks);
    }

    return 0;
}
