/*
Write a program to find the permeter of a polygon

***Function Declarations***
```c
typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
*/
#include <stdio.h>
typedef struct point {
    float x,y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s\n", prompt_msg);
    printf("Enter x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

int input_polygon(Polygon *poly) {
    poly->sides = input_n();

    if (poly->sides < 3 || poly->sides > 100) {
        printf("Invalid number of sides. The polygon must have between 3 and 100 sides.\n");
        return 0;
    }

    for (int i = 0; i < poly->sides; ++i) {
        poly->p[i] = input_point("Enter coordinates for a point:");
    }

    return 1;
}

float find_distance(Point a, Point b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

void find_perimeter(Polygon *poly) {
    poly->perimeter = 0.0;

    for (int i = 0; i < poly->sides; ++i) {
        int next = (i + 1) % poly->sides;
        poly->perimeter += find_distance(poly->p[i], poly->p[next]);
    }
}

void output(Polygon poly) {
    printf("Perimeter of the polygon: %.2f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;

    if (input_polygon(&myPolygon)) {
        find_perimeter(&myPolygon);
        output(myPolygon);
    }

    return 0;
}