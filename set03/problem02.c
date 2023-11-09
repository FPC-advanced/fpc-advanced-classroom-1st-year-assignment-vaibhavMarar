/*
Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
*/
#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter coordinate for point 1: ");
    scanf("%f %f %f",x1,y1);
    printf("Enter coordinate for point 2: ");
    scanf("%f %f %f",x2,y2);
    printf("Enter coordinate for point 3: ");
    scanf("%f %f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
   float result = 0.5 *(x1*(y2-y3) +x2*(y3-y1) + x3*(y1-y2));
   return result;
}
   void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
      if(result !=0){
        printf("the given three sets of point can make a triangle ");
      }else{
        printf("The given three sets of point cannot make a triangle as they lie on same plane ");
      
      }
   }
 
  int main(){
    float x1,y1,x2,y2,x3,y3,result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
  }
   



