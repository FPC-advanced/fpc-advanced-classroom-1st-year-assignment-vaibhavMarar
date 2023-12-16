/*
Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***

```c
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
*/
#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length){
    printf("\nEnter the value for Stomach Radius: ");
    scanf("%f",radius);
    printf("\nEnter the Height of Camel's Body: ");
    scanf("%f",height);
    printf("\nEnter the Length of Camel's Body: ");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length){
    return (3.14159)*(radius*radius*radius)*sqrt(length*height);
}

void output(float radius, float height, float length,float weight){
    printf("the camel details are as follows:\n");
    printf("the heigth of camel is: %.2fm\n",height);
    printf("The length of camel is :%.2fm\n",length);
    printf("The stomach radious of camel is :%.2fm\n",radius);
    printf("So the weigh of the camel is :%.2f Kg.m\n",weight);
}

int main(){
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;    
}