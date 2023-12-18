/*
Write a program to add two fractions

***Function Declarations***
```c
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2)
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
*/
#include <stdio.h>

// Structure to represent a fraction
typedef struct {
    int num, den;
} Fraction;

// Function to input a single fraction
Fraction input_fraction() {
    Fraction f;
    printf("Enter the numerator: ");
    scanf("%d", &f.num);
    printf("Enter the denominator: ");
    scanf("%d", &f.den);
    return f;
}

// Function to find the greatest common divisor (gcd) of two numbers
int find_gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return find_gcd(b, a % b);
    }
}

// Function to add two fractions
Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = f1.num * f2.den + f2.num * f1.den;
    result.den = f1.den * f2.den;

    // Simplify the fraction by dividing both numerator and denominator by their gcd
    int gcd = find_gcd(result.num, result.den);
    result.num /= gcd;
    result.den /= gcd;

    return result;
}

// Function to output the result
void output(Fraction f1, Fraction f2, Fraction sum) {
    printf("\nFraction 1: %d / %d\n", f1.num, f1.den);
    printf("Fraction 2: %d / %d\n", f2.num, f2.den);
    printf("Sum of fractions: %d / %d\n", sum.num, sum.den);
}

int main() {
    // Input the first fraction
    printf("Enter details for Fraction 1:\n");
    Fraction fraction1 = input_fraction();

    // Input the second fraction
    printf("\nEnter details for Fraction 2:\n");
    Fraction fraction2 = input_fraction();

    // Add the fractions
    Fraction sum = add_fractions(fraction1, fraction2);

    // Output the result
    output(fraction1, fraction2, sum);

    return 0;
}