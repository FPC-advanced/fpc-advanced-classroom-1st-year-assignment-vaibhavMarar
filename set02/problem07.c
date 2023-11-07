#include<stdio.h>
typedef struct{
    float base, height, area;
} Triangle;

Triangle input_triangle(){
    Triangle tri;
    printf("enter the base and height of triangle: ");
    scanf("%f %f",&tri.height,&tri.base);
    return tri;
}
 void find_area(Triangle *tri){
    tri-> area= 0.5 *tri->base *tri->height;
 }
 void output(Triangle tri){
    printf("the area of triangle is %f",tri);
 }

 int main(){
    Triangle tri = input_triangle();
    find_area(&tri);
    output(tri);
    return 0;

    
 }