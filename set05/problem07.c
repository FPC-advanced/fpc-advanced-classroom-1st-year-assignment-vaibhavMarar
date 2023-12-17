/*
Write a program to find out if the name of the camel is a nice name.

> A camel has a nice name if it has at least 2 vowels and 2 consonants in it

***Function Declarations***
```c
void input(char *name);
int has_nice_name(char *c);
void output(int res);
*/
#include <stdio.h>
#include<string.h>

void input(char *name){
    printf("enter the name of camel: ");
    scanf("%s",name);
}

int nice_name(char *c){
    int vowels =0;
    int consonents = 0;
    for(int i=0;i < strlen(c);i++){
        char ch = c[i] + ('a' - 'A'); 
         if(ch == 'a'|| ch == 'e' || ch =='i' ||ch =='o' ||ch =='u' ){
            vowels++;
         }else if(ch >= 'a' && ch <= 'z'){
            consonents++;
         }
    }
    return (vowels >= 2 && consonents >= 2);
}

void output(int res){
    if(res){
        printf("the camel has a nice name\n");
    }else{
        printf("the camel does not have a nice name\n");
    }
}

int main(){
    char name[50];
    input(name);
    int result = nice_name(name);
    output(result);
    return 0;
}