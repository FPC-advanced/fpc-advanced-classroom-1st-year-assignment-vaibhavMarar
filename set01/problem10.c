#include <stdio.h>

void input_two_strings(char *string1,char *string2)
{
    printf("Input the first string: ");
    scanf("%s",string1);
    printf("Input the second string: ");
    scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
    int i=0;
    while(string1[i]!='\0' || string2[i]!='\0')
    {
        if (string1[i]>string2[i])
        {
            return 1;
        }
        else if (string1[i]<string2[i])
        {
            return 2;
        }
        else{
            return 0;
        }
    i++;
    }
    return 0;
}

void output(char *string1, char *string2, int result)
{
    if (result==1)
    {
        printf("The greater string is %s",string1);
    }
    else if (result==2)
    {
       printf("The greater string is %s",string2); 
    }
    else
    {
        printf("The strings are equal");
        }
}

int main()
{
    char str1,str2,result;
    input_two_strings(&str1,&str2);
    result = stringcompare(&str1,&str2);
    output(&str1,&str2,result);
    return 0;
}