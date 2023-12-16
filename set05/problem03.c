/*
Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***
```c
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
void find_weight(Camel *c); //passing address variable
void output(Camel c);
*/
#include<stdio.h>
#include<math.h>
struct CAMEL{
    float radius,height,length,weight;
};
typedef struct CAMEL camel;
camel input(){
    camel c;
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", &c.radius);

    printf("Enter the height of the camel: ");
    scanf("%f", &c.height);

    printf("Enter the length of the camel: ");
    scanf("%f", &c.length);

    return c;
}
float calculate_weight(camel c){
    return 3.142 *(c.radius*c.radius*c.radius)*sqrt(c.height*c.length);
}

void output(camel c){
    printf("\nCamel Details:\n");
    printf("Stomach Radius: %.2f\n", c.radius);
    printf("Height: %.2f\n", c.height);
    printf("Length: %.2f\n", c.length);
    printf("Weight: %.2f\n", c.weight);
}

int main(){
    camel myCamel;
    myCamel=input();
    myCamel.weight=calculate_weight(myCamel);
    output(myCamel);
    return 0;
}