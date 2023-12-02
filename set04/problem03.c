/*
Write a program to find the `nCr` of given n and r

***Function Declarations***
```c
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
*/
#include<stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);



// Function to input values of n and r
void input_n_and_r(int *n, int *r) {
    printf("Enter the value of n: ");
    scanf("%d", n);

    printf("Enter the value of r: ");
    scanf("%d", r);
}

// Function to calculate nCr
int nCr(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

// Function to output the result
void output(int n, int r, int result) {
    printf("C(%d, %d) = %d\n", n, r, result);
}

int main() {
    int n, r;

    // Input values of n and r
    input_n_and_r(&n, &r);

    // Calculate nCr
    int result = nCr(n, r);

    // Display the result
    output(n, r, result);

    return 0;
}