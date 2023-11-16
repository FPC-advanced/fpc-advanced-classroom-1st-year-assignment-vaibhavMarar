/*
Write a program to find the length of a line

***Function Declarations***
```c
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
formulae : root(x2-x1)*(x2-x1) +(y2-y1)*(y2-y1)
*/

#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point(){
    Point p;
    printf("Enter x-coordinate: ");
    scanf("%f",&p.x);
    printf("Enter y-coordinates: ");
    scanf("%f",&p.y);
    return p;
}

Line input_line(){
    Line l;
     printf("Enter coordinates for point 1: ");
    l.p1=input_point();
    printf("Enter coordinates for point 2: ");
    l.p2=input_point();
    return l;
}


void find_length(Line *l){
    float dx= l->p2.x - l->p1.x;
    float dy= l->p2.y - l->p1.y;
    l->distance= sqrt(dx*dx + dy*dy);
}

void output(Line l){
    printf("\nLength of the line is %.2lf",l.distance);
}

int main(){
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}