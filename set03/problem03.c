/*
Write a program to check if the given number is prime

***Function Declarations***
```c
int input_number();
int is_prime(int n);
void output(int n, int result);
*/
#include<stdio.h>
int input_number(){
    int num;
    printf("Enter any positive integer: ");
    scanf("%d",&num);
    return num;
}

int is_prime(int n){
    if (n <= 1) {
        printf("Number should be greater than 1!");
        
    }
    for (int i = 2; i*i<= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}
void output(int n, int result){
    if (result==0){
        printf("\n%d is not a Prime Number",n);}
        else{
            printf("\n%d is a Prime Number",n);
        
        }
}

int main(){
    int n=input_number();
    int result=is_prime(n);
    output(n,result);
    return 0;
}