#include <stdio.h>





int input(int *a,int *b,int *c)
{
    printf("Enter the first number: ");
    scanf("%d",a);
    printf("Enter the second number: ");
    scanf("%d",b);
    printf("Enter the third number: ");
    scanf("%d",c);
}

void compare(int a, int b, int c, int *largest)
{
    if (a>=b && a>=c)
    {
        *largest=a;
    }
    else if (b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("The largest amongst %d,%d and %d is %d",a,b,c,largest);
}

int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}