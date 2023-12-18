/*
Write a program to add n fractions

***Function Declarations***
```c
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
*/
#include <stdio.h>

typedef struct fraction
{
    int num, den;
}Fraction;

int input_n(){
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction() {
    Fraction f;
    printf("Enter the numerator: ");
    scanf("%d", &f.num);
    printf("Enter the denominator: ");
    scanf("%d", &f.den);
    return f;
}
void input_n_fractions(int n, Fraction f[n]) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for fraction %d:\n", i + 1);
        f[i] = input_fraction();
    }
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

// Function to add n fractions
Fraction add_n_fractions(int n, Fraction f[n]) {
    Fraction sum = {0, 1}; // Initialize sum to 0/1

    for (int i = 0; i < n; i++) {
        sum = add_fractions(sum, f[i]);
    }

    return sum;
}

// Function to output the result
void output(int n, Fraction f[n], Fraction sum) {
    printf("\nSum of the %d fractions is: %d / %d\n", n, sum.num, sum.den);

    // Output each individual fraction
    for (int i = 0; i < n; i++) {
        printf("Fraction %d: %d / %d\n", i + 1, f[i].num, f[i].den);
    }
}

int main() {
    // Input the number of fractions
    int n = input_n();

    // Declare an array of fractions
    Fraction fractions[n];

    // Input n fractions
    input_n_fractions(n, fractions);

    // Add the fractions
    Fraction sum = add_n_fractions(n, fractions);

    // Output the result
    output(n, fractions, sum);

    return 0;
}