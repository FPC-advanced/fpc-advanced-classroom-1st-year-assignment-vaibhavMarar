/*
Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

***Function Declarations***
```c
int input_array_size();
void init_array(int n, int a[n];
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
*/
#include<stdio.h>

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 0; i < n; i++) {
        a[i] = 1; // Initialize all elements to 1 (assumed prime)
    }
    a[0] = a[1] = 0; // 0 and 1 are not prime
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; // Mark multiples of p as non-prime
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are: \n", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n = input_array_size();
    int a[n];

    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);

    return 0;
}
