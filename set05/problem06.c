/*
Write a program to find the average of all the odd elements in an array

***Function Declarations***
```c
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
*/
#include <stdio.h>
int input_n(){
    int n;
    printf("enter the number of values to be entered: ");
    scanf("%d",&n);
    return n;
}
void input(int n, int a[n]){
    int i;
    printf("enter the values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
float odd_average(int n, int a[n]){
    float sum = 0;
    int count = 0;
    for(int i=0;i<n;i+=2){
        if (a[i] % 2 != 0) {
            sum += a[i];
            count++;
            }
}
float avg = sum / count;
return avg;

}

void output(float avg){
    printf("The average of all the odd numbers is :%f\n",avg);
}

int main(){
    int n = input_n();
    int a[n];
    input(n,a);
    float avg = odd_average(n,a);
    output(avg);
    return 0;
}

