/******PROGRAM TO REVERSE THE GIVEN NUMBER USING RECURSION**********/
/********AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169********/
/*******************************************************************/

#include<stdio.h>

/*******************************************************************/

int reverse(n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev = rev*10+r;
    }
    return rev;
}

/*******************************************************************/

void main()
{
    int n=123;
    printf("Enter the number :%d\n",n);
    int z=reverse(n);
    printf("%d",z);
}
