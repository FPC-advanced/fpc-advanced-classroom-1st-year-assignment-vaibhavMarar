/*
Write a program to find out the mood of a Camel.

Camel is:
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.

***Function Declarations***

```c
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length)
void output(float radius, float height, float length, int mood);
*/
#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length){
    printf("Enter camel's stomach radius : ");
    scanf("%f", radius);
    printf("Enter camel's height : ");
    scanf("%f", height);
    printf("Enter camel's length : ");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length){
    if(radius < height && radius < length){
        return 1;
    }else if(height < length && height < radius){
        return -1;
    }else if(length < height && length < radius){
        return 2;
    }else{
        return 0;
    }
}

void output(float radius, float height, float length,int mood){
    printf("\nCamel Details:\n");
    printf("Stomach Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Length: %.2f\n", length);

    switch (mood)
    {
    case 1:
        printf("Mood: Sick\n");
        break;
    case -1:
        printf("Mood: Happy\n");
        break;
    case 2:
        printf("Mood: Tense\n");
        break;
    case 0:
        printf("Mood: Undefined\n");
        break;    
        default:
        break;
    }
}

int main(){
    float radius,height,length,mood;
    input_camel_details(&radius,&height,&length);
    mood = find_mood(radius,height,length);
    output(radius,height,length,mood);
    return 0;
}