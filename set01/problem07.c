#include <stdio.h>





int input_n()
{
    int n;
    printf("The enter the value of n: ");
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n)
{
    int i=0,sum=0;
    for(i=1;i<n;i++)
    {
        sum+=i;
    }
    return sum;
}

void output(int n, int sum)
{
    printf("The sum of natural numbers until %d is %d",n,sum);
}

int main()
{
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}