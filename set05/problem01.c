/*
 Write a program to find the distance between two points.

***Function Declarations***

```c
struct _point {
  float x;
  float y;
};
*/
#include<stdio.h>
#include<math.h>
struct _point
{
    float x;
    float y;
};
typedef struct _point Point;


float calculate_dist(Point p1,Point p2){
    return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}

int main(){
    Point pnta,pntb;
    printf("enter the value of x-coordinate of first point: ");
    scanf("%d",&pnta.x);

    printf("enter the value of y-coordinate of first point: ");
    scanf("%d",&pnta.y);

    printf("enter the value of x-coordinate of second point: ");
    scanf("%d",&pntb.x);

    printf("enter the value of y-coordinate of second point: ");
    scanf("%d",&pntb.y);

    float distance=calculate_dist(pnta,pntb);
    printf("\nThe distance between (%d,%d) and (%d,%d)is %d",pnta.x,pnta.y,pntb.x,pntb.y,distance);
    
    return 0;
}