#include<stdio.h>

int input(){
    int num;
    printf("enter a no.");
    scanf("%d",&num);
    return num;
}
int calculate(int a, int b){
    return a + b;
}

void output(int sum){
 printf("sum of both no. is %d",sum);
}

int main(){
    int a,b,sum;
    a=input();
    b=input();
    sum = calculate(a,b);
    output(sum);
    return 0;
}