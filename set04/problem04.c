/*
Write a program to evaluate a polynomial at a given point using [Horner's Method]

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
*/

#include <stdio.h>
int input_degree() {
    int n;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);

    return n;
}

// Function to input coefficients of the polynomial
void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial:\n");

    for (int i = 0; i <= n; ++i) {
        printf("a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

// Function to input the value of x
float input_x() {
    float x;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    return x;
}

// Function to evaluate the polynomial using Horner's Method
float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[n];

    for (int i = n - 1; i >= 0; --i) {
        result = result * x + a[i];
    }

    return result;
}

// Function to output the result
void output(int n, float a[n], float x, float result) {
    printf("The polynomial ");
    for (int i = n; i >= 0; --i) {
        if (i == n) {
            printf("%.2fx^%d ", a[i], i);
        } else {
            printf("+ %.2fx^%d ", a[i], i);
        }
    }
    printf("evaluated at x = %.2f is: %.2f\n", x, result);
}
int main() {
    int n;
    float x, result;

    // Input degree of the polynomial
    n = input_degree();

    // Input coefficients of the polynomial
    float coefficients[n];
    input_coefficients(n, coefficients);

    // Input value of x
    x = input_x();

    // Evaluate the polynomial
    result = evaluate_polynomial(n, coefficients, x);

    // Display the result
    output(n, coefficients, x, result);

    return 0;
}