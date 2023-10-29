//2. Write a C program to add two numbers.

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int sum = num1 + num2;
    printf("the sum of %d and %d is %d",num1,num2,sum);
    return 0;
}