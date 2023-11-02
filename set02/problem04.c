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
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n]){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(a[i] > 1){
            for(int j=2; j<=a[i]/2; j++){
                if(a[i] % j == 0){
                    sum += a[i];
                    break;
                }
            }
        }
    }
    return sum;
}

void output(int sum){
    printf("Sum of composite numbers in the array: %d\n", sum);
}

int main(){
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
