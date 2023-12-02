/*
Write a program to count the number of words in a string using strtok (_string.h_)

***Function Declarations***
```c
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);
*/
#include<stdio.h>
#include <string.h>
void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 100, stdin); // Reading up to 100 characters including spaces
}

// Function to count the number of words in the string
int count_words(char *string) {
    int count = 0;
    char *token = strtok(string, " \t\n"); // Tokenizing based on space, tab, and newline characters

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t\n");
    }

    return count;
}

// Function to output the result
void output(char *string, int no_words) {
    printf("The string \"%s\" contains %d words.\n", string, no_words);
}
int main() {
    char inputString[100]; // Assuming a maximum input string length of 100 characters
    int wordCount;

    // Input the string
    input_string(inputString);

    // Count the number of words
    wordCount = count_words(inputString);

    // Output the result
    output(inputString, wordCount);

    return 0;
}