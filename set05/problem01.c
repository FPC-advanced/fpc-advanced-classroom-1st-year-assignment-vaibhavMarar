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
struct _point {
  float x;
  float y;
};

float calculateDistance(struct _point p1, struct _point p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

int main() {
    struct _point point1, point2;

    // Input coordinates for the first point
    printf("Enter x and y coordinates for the first point:\n");
    printf("x1 = ");
    scanf("%f", &point1.x);
    printf("y1 = ");
    scanf("%f", &point1.y);

    // Input coordinates for the second point
    printf("\nEnter x and y coordinates for the second point:\n");
    printf("x2 = ");
    scanf("%f", &point2.x);
    printf("y2 = ");
    scanf("%f", &point2.y);

    // Calculate and display the distance
    float distance = calculateDistance(point1, point2);
    printf("\nDistance between the two points: %.2f\n", distance);

    return 0;
}