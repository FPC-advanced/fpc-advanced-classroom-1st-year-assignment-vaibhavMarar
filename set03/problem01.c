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
float find_distance(float x1, float y1, float x2, float y2){
    float distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance){
    printf("the distance between (%.2lf,%.2lf) and (%.2lf,%2lf) is %.2lf",x1,y1,x2,y2,distance);
}
int main(){
    float x1,y1,x2,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}