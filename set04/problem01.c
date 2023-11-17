/*
 Write a program to find sum of two fractions

***Function Declarations***
```c
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
*/

#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2){
    printf("enter the numerator value for first fraction: ");
    scanf("%d",num1);
    printf("enter the denominator value for fsecond fraction: ");
    scanf("%d",den1);
    printf("enter the numerator value for first fraction: ");
    scanf("%d",num2);
    printf("enter the denominator value for second fraction: ");
    scanf("%d",den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
    *res_den= den1* den2;
    *res_num= (num1 *den2) + (num2*den2);
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
    printf("\nThe result is %d/%d\n",res_num,res_den);
}

int main(){
    int num1, den1, num2, den2, res_num, res_den;
     input(&num1, &den1, &num2, &den2);
     add(num1, den1, num2, den2, &res_num, &res_den);
     output(num1, den1, num2, den2, res_num, res_den);
     return 0;
}