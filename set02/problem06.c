/*
Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
*/
#include <stdio.h>
int find_length(char *str) {
    int length = 0;
    while(*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to input a string
void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

// Function to reverse a string
void str_reverse(char *str, char *rev_str) {
    int length = find_length(str);

    for (int i = 0; i < length; i++) {
        rev_str[i] = str[length - i - 1];
    }

    rev_str[length] = '\0'; // Null-terminate the reversed string
}

// Function to output the original and reversed strings
void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main() {
    char input_str[100];
    char reversed_str[100];

    // Input a string
    input_string(input_str);

    // Reverse the string
    str_reverse(input_str, reversed_str);

    // Output the original and reversed strings
    output(input_str, reversed_str);

    return 0;
}
 