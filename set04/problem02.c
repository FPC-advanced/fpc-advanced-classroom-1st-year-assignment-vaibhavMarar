/*
Write a program to find the smallest of three fractions

***Function Declarations***
```c
typedef struct {
    int num, den;
} Fraction;
*/
#include<stdio.h>
typedef struct {
    int num,den;
} Fraction;

int compare_fraction(Fraction frac1,Fraction frac2){
    int prodct = frac1.num * frac2.den - frac2.num * frac1.den;
}

Fraction smallest_frac( Fraction frac1, Fraction frac2, Fraction frac3){
    if (compare_fraction(frac1,frac2) < 0 && compare_fraction(frac1, frac3)<0){
        return frac1;
    }else if(compare_fraction(frac2,frac3)){
        return frac2;
    }else{
        return frac3;
    }
}

int main(){
    Fraction frac1,frac2,frac3;
    printf("Enter numerator and denominator for fraction 1: ");
    scanf("%d %d",&frac1.num,&frac1.den);
    printf("Enter numerator and denominator for fraction 1: ");
    scanf("%d %d",&frac2.num,&frac2.den);
     printf("Enter numerator and denominator for fraction 1: ");
    scanf("%d %d",&frac3.num,&frac3.den);
 Fraction smallestFraction = smallest_frac(frac1, frac2, frac3);
     printf("The smallest fraction is: %d/%d\n", smallestFraction.num, smallestFraction.den);
     return 0;

}