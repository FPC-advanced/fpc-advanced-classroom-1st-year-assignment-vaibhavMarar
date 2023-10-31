/*  Write a program to find if a triangle is scalene.

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
*/
#include <stdio.h>
int input(){
    int num;
    printf("enter a length of side");
    scanf("%d",&num);
    return num;
}

int check_scalene(int a, int b, int c){
    if(a != b && b!=c && c!=a){
        return 1; 
    }
    else{
        return 0;
    }
}

void output(int a, int b, int c, int isscalene){
    if (isscalene == 1) {
        printf("The triangle is SCALENE\n");
    }
    else{
        printf("the triangle is not scalene");
    }
}

int main(){
    int a,b,c,isscalene;
    a = input();
    b = input();
    c = input();
     isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
