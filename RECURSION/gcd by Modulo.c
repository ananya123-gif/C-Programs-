/******PROGRAM FOR FINDING GCD OF TWO NUMBERS USING MODULO RECURSION***********/
/*********AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169*******************/
/*****************************************************************************/

#include<stdio.h>

/****************************************************************************/

int gcd(a,b)
{
    if(a==0)
        return b;
    else
        if(b==0)
           return a;
    else
        if(a>b)
           return gcd(a%b,b);
    else
        if(b>a)
           return gcd(a,b%a);
}

/***************************************************************************/

void main()
{
    int a=51;
    int b=15;
    printf("The value of a :%d\n",a);
    printf("The value of b :%d\n",b);
    int z=gcd(a,b);
    printf("%d",z);
}
