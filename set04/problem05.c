/*
Write a program to find the index of the largest number in an array

***Function Declarations***
```c
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
```
*/
#include <stdio.h>
int input_size() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    return n;
}

// Function to input the array elements
void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; ++i) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Function to find the index of the largest number in the array
int find_largest_index(int n, int a[n]) {
    int largestIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[largestIndex]) {
            largestIndex = i;
        }
    }

    return largestIndex;
}

// Function to output the result
void output(int index) {
    printf("The index of the largest number in the array is: %d\n", index);
}
int main() {
    int n, index;

    // Input the size of the array
    n = input_size();

    // Input the array elements
    int array[n];
    input_array(n, array);

    // Find the index of the largest number
    index = find_largest_index(n, array);

    // Display the result
    output(index);

    return 0;
}