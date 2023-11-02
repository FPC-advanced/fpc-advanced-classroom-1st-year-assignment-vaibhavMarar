/*
Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
*/
#include <stdio.h>
int input_array_size(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    return size;
}

void input_array(int n, int a[n]){
    printf("enter the size of array: ");
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i] >i){
            for(int j=2;j<=a[i];j++){
                if(a[i]%j ==0){
                    sum+= a[i];
                    break;
                }
            }
        }
    }
    return sum;
}

void output(int sum){
    printf("the sum of all composite numbers in the following is %d",sum);
}

int main(){
    int n,a[n],sum;
    n = input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}
