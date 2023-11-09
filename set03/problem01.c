/*
Write a program to find the distance between 2 points

***Function Declarations***
```c
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
*/
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2){
    printf("enter coordinates of first point: ");
    scanf("%f %f",x1,y1);
    printf("enter coordinates of second point: ");
    scanf("%f %f",x2,y2);
}
int main(){
    float x1,y1,x2,y2;
    input(&x1,&y1,&x2,&y2);
    return 0;
}