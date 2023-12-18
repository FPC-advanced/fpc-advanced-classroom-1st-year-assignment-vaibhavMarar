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
typedef struct _camel {
    float radius, height, length, weight;
} Camel;


void input(int n, Camel c[n], float *truck_weight) {
    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for camel %d:\n", i + 1);
        printf("Enter radius: ");
        scanf("%f", &c[i].radius);
        printf("Enter height: ");
        scanf("%f", &c[i].height);
        printf("Enter length: ");
        scanf("%f", &c[i].length);
    }
}


void find_camel_weight(int n, Camel c[n]) {
    for (int i = 0; i < n; i++) {
      
        c[i].weight = (3.142)*(c[i].radius*c[i].radius*c[i].radius)*sqrt(c[i].height*c[i].length);
    }
}


float compute_total_weight(int n, Camel c[n], float truck_weight) {
    float total_weight = truck_weight;

    for (int i = 0; i < n; i++) {
        total_weight += c[i].weight;
    }

    return total_weight;
}


void output(float total_weight) {
    printf("\nThe total weight of the truck load is: %.2f\n", total_weight);
}

int main() {
    int n;
    printf("Enter the number of camels: ");
    scanf("%d", &n);

    Camel camels[n];
    float truck_weight;

   
    input(n, camels, &truck_weight);

   
    find_camel_weight(n, camels);

    float total_weight = compute_total_weight(n, camels, truck_weight);
    output(total_weight);

    return 0;
}