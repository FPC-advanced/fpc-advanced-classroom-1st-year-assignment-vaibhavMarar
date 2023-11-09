/*
Write a program to find nth number in fibonacci sequence.

> Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

***Function Declarations***
```c
int input();
int find_fibo(int n);
void output(int n, int fibo);
*/

#include <stdio.h>

int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, fibo;

        for (int i = 2; i <= n; i++) {
            fibo = a + b;
            a = b;
            b = fibo;
        }

        return fibo;
    }
}

void output(int n, int fibo) {
    printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
}

int main() {
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);

    return 0;
}