/*
Write program to find the weight of a truck load of n camels.

Take inputs for:
- truck weight
- height, radius and length of n different camels

> `total_truck_weight = truck_weight + weight_of_camels`

***Function Declarations***
```c
typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);
*/
#include <stdio.h>
#include <math.h>
typedef struct _camel{
    float radius,height,length,weight;
}Camel;

void input(int n, Camel c[n], float *truck_weight){
    printf("enter the weight of truck: ");
    scanf("%f",truck_weight);

    for(int i=0;i<n;i++){
        printf("\nEnter the details of camel %d:\nRadius: ",i+1);
        printf("enter radius of the camel");
        scanf("%f",c[i].radius);
        printf("enter height of the camel");
        scanf("%f",c[i].height);
        printf("enter length of the camel");
        scanf("%f",c[i].length);
    }
}

void find_camel_weight(int n, Camel c[n]){
    for(int i=0;i<n;i++){ //(3.14159)*(radius*radius*radius)*sqrt(length*height)
        c[i].weight = (3.142)*(c[i].radius*c[i].radius*c[i].radius)*sqrt(c[i].length*c[i].height);
    }
} 

float compute_total_weight(int n, Camel c[n], float truck_weight){
    float total_weight = truck_weight;
    for(int i=0;i<n;i++){
        total_weight += c[i].weight;
    }
    return total_weight;
}

void output(float total_weight) {
    printf("\nThe total weight of the truck load is: %.2f\n", total_weight);
}

int main(){
    int n;
    printf("enter the no. of camels: ");
    scanf("%d",&n);

    Camel camel[n];
    float truck_weight;

}