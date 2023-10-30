#include <stdio.h>

struct _complex {
	float real,imaginary;
};

typedef struct _complex Co;

int get_n();
void input_n_Co(int n, Co c[n]);
Co add_n_Co(int n, Co c[n]);
void output(int n, Co c[n], Co result);

int main()
{
    int n;
    n=get_n();
    Co c[n],result;
    input_n_Co(n,c);
    result=add_n_Co(n,c);
    output(n,c,result);
    return 0;
}

int get_n()
{
    int n;
    printf("Enter the total number of compelex numbers: ");
    scanf("%d",&n);
    return n;
}

void input_n_Co(int n, Co c[n])
{
    for(int i=0;i<n;i++)
    {
    printf("Please enter the real part of the complex number: ");
    scanf("%f",&c[i].real);
    printf("Please enter the imaginary part of the complex number: ");
    scanf("%f",&c[i].imaginary);
    }
}

Co add_n_Co(int n, Co c[n])
{
    Co sum;
    for(int i=0;i<n;i++)
    {
        sum.real+=c[i].real;
        sum.imaginary+=c[i].imaginary;
    }
    return sum;
}

void output(int n, Co c[n], Co result)
{
    for(int i=0;i<n-1;i++)
    {
        printf("%.2f+%.2f i +",c[i].real,c[i].imaginary);
    }
    printf("%.2f+%.2f i is %.2f+%.2f i",c[n].real,c[n].imaginary,result.real,result.imaginary);

}