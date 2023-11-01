/*
Write a program find whether a number is a composite number
int input_number();
int is_composite(int n);
void output(int n, int result);
*/
#include<stdio.h>
int input_number(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    return num;
}
int is_composite(int n){
   if (n <= 1) {
        printf("Number should be greater than 1!");
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0; 
}

void output(int n, int result){
    if(result==1){
        printf("\n%d is a composite number.", n);
        }else{
            printf("\n%d is a prime number.", n);
            }

}

int main(){
    int n,result;
    n = input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}
