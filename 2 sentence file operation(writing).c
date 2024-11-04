//modifying the file to write 2 sentences without overwriting the first one
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100 // this defines the maximum length for the input sentence

// Function to write a sentence to a file
int writeSentenceToFile(const char *sentence) {
    FILE *file = fopen("data.txt", "a"); // Open the data file in append mode
    if (file == NULL) {
        printf("Error opening the file!!\n");
        return 1;
    }

    fprintf(file, "%s", sentence); // this writes the sentence to the file

    fclose(file);
    return 0;
}

// Function to read and display the content of data.txt
int readAndDisplayFile() {
    FILE *file = fopen("data.txt", "r"); // this opens the file for reading
    if (file == NULL) {
        printf("Error opening the file for reading!\n");
        return 1;
    }

    char line[MAX_LENGTH]; // buffer to hold each line read from the file
    printf("\nContents of data.txt:\n");

    // Read and display each line until end of file
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); // print each line to the screen if it is not NULL
    }

    fclose(file); // this closes the file after reading
    return 0;
}

int main() {
    char sentence[MAX_LENGTH];

    printf("Enter a sentence (up to %d characters): ", MAX_LENGTH);
    fgets(sentence, sizeof(sentence), stdin); // This allows the user to insert space as a character

    // Calling the function and check for success or failure
    if (writeSentenceToFile(sentence) == 0) {
        printf("First sentence written successfully.\n");

        // Prompt for a second sentence
        printf("Enter a second sentence (up to %d characters): ", MAX_LENGTH);
        fgets(sentence, sizeof(sentence), stdin); // This allows the user to insert space as a character

        // Write second sentence to file
        if (writeSentenceToFile(sentence) == 0) {
            printf("Second sentence written successfully.\n");
        } else {
            printf("Failed to write second sentence to file.\n");
        }

        // Call the read function and check for success or failure
        if (readAndDisplayFile() != 0) {
            printf("Failed to read from file.\n");
        }
    } else {
        printf("Failed to write sentence to file.\n");
    }

    return 0;
}
