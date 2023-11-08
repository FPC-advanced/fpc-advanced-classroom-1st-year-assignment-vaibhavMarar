/*
Write a program to find the triangle with smallest area in n given triangles.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
*/
#include<stdio.h>

typedef struct{
    float base, height, area;
} Triangle;

int input_n() {
    int n;
    printf("enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle() {
    Triangle t;
    printf("enter base and height of the triangle: ");
    scanf("%f %f", &t.base, &t.height);
    return t;
}

void input_n_triangles(int n, Triangle t[n]) {
    for(int i=0; i<n; i++) {
        printf("for triangle %d: ", i+1);
        t[i] = input_triangle();
    }
}

void find_area(Triangle *t) {
    t->area = 0.5 * t->base * t->height;
}

void find_n_areas(int n, Triangle t[n]) {
    for(int i=0; i<n; i++) {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
    Triangle smallest = t[0];
    for(int i=1; i<n; i++) {
        if(t[i].area < smallest.area) {
            smallest = t[i];
        }
    }
    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest) {
    printf("the triangle with area %.2f units is smallest.", smallest.area);
}

int main() {
    int n = input_n();

    Triangle t[n];
    input_n_triangles(t,n);
    find_n_areas(t,n);
    Triangle smallest = find_smallest_triangle(t,n);
    output(t,n,smallest); 

    return 0;
}