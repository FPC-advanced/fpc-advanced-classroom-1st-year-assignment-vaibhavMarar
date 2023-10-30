#include <stdio.h>



int input_array_size()
{
    int n;
    printf("Please input the array size: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    int i=0;
    printf("Please enter the array values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int i=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

void output(int n, int a[n],int sum)
{
    printf("The sum is %d",sum);
}

int main()
{
    int n,sum=0;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}