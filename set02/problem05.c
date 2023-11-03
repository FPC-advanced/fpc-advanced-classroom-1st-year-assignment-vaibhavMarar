/*
Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
*/
#include<stdio.h>
int input(){
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    return num;
}
int find_gcd(int a, int b){
     if(b == 0){
        return a;
     }
     else{
        return find_gcd(b, a%b);
     }
}

void output(int a,int b,int gcd){
    printf("\nGCD(%d,%d) = %d\n",a,b,gcd);
}
int main(){
    int a,b,gcd;
    a = input();
    b = input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}