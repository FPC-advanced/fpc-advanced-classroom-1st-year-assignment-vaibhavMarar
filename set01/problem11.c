#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
    Complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}

Complex input_complex()
{
    Complex a;
    printf("Please enter the real part of the number: ");
    scanf("%f",&a.real);
    printf("Please enter the imaginary part of the number: ");
    scanf("%f",&a.imaginary);
    return a;
}

Complex add_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of the real part of the two numbers is %.2f",sum.real);
    printf("The sum of the imaginary part of the two numbers is %.2f",sum.imaginary);

}