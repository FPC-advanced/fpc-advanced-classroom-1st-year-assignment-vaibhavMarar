/*
Write a program to find the index of a substring of a string

***Function Declarations***
```c
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
*/
#include <stdio.h>





void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int i, j, k;
    for (i = 0; string[i] != '\0'; i++) {
        for (j = i, k = 0; substring[k] != '\0' && string[j] == substring[k]; j++, k++);
        if (substring[k] == '\0') {
            return i;
        }
    }
    return -1;  // Substring not found
}

void output(char* string, char* substring, int index) {
    if (index != -1) {
        printf("The substring '%s' starts at index %d in the string: '%s'\n", substring, index, string);
    } else {
        printf("The substring '%s' was not found in the string: '%s'\n", substring, string);
    }
}

int main() {
    char main_string[100], sub_string[100];
    input_string(main_string, sub_string);
    int index = sub_str_index(main_string, sub_string);
    output(main_string, sub_string, index);
    return 0;
}