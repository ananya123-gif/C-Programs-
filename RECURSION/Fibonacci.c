/*****PROGRAM FOR FINDING nth FIBONACCI NUMBER USING RECURSION AND IMPROVING ITS RUN TIME TO SAVE STACK OPERATION ****/
/*****************AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169*****************/
/*************************************************************************************/

#include<stdio.h>
int memo[100];
/*****************************************************/
fib(int n)
{
    if(n==1)
        return 0;
    else
        if(n==2)
          return 1;
        else
        {
            if(memo[n]==0)
                memo[n]=(fib(n-1)+fib(n-2));
            return memo[n];
        }
}

/****************************************************/

void main()
{
    int n=9;
    printf("%d",fib(n));
}
