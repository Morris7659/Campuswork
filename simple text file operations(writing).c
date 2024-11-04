//Simple text file operations(writing)
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100 // defining the maximum length for the input sentence

// Function to write a sentence to a file, returning an int for sufailure
int writeSentenceToFile(const char *sentence) {
    FILE *file = fopen("data.txt", "w"); // this opens the data file
    if (file == NULL) {
        printf("Error opening the file!!\n");
        return 1;
    }

    fprintf(file, "%s", sentence); // this writes the sentence to the file

    fclose(file);
    return 0;
}

int main() {
    char sentence[MAX_LENGTH];

    printf("Enter a sentence (up to %d characters): ", MAX_LENGTH);
    fgets(sentence, sizeof(sentence), stdin); // This allows the user to insert space as a character

    // Calling the function and check for success or failure
    if (writeSentenceToFile(sentence) == 0) {
        printf("Sentence written successfully.\n");
    } else {
        printf("Failed to write sentence to file.\n");
    }

    return 0;
}
