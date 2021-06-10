/****PROGRAM FOR FINDING FACTORIAL OF A GIVEN NUMBER USING RECURSION****/
/*******AUTHOR : ANANYA SHUKLA, ADMISSION :2019B101169******************/
/***********************************************************************/
#include<stdio.h>

/**********************************************************************/

int fact(n)
{
    if(n==0 || n==1)
        return 1;
    else
        if(n>0)
            return n*fact(n-1);
}

/**********************************************************************/

void main()
{
    int n=5;
    printf("The taken number is : %d \n",n);
    int t=fact(n);
    printf("Factorial is %d",t);
}
