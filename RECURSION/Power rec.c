/********PROGRAM FOR COMPUTING a RAISED TO POWER n USING RECURSION**********/
/***********AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169*************/
/***************************************************************************/

#include<stdio.h>

/***************************************************************************/

int pow(a,n)
{
    if(n==0)
        return 1;
    else
        return (a*pow(a,n-1));
}

/**************************************************************************/

void main()
{
    int a=3;
    int n=5,z;
    printf("The value of a :%d\n",a);
    printf("The value of n :%d\n",n);
    z=pow(a,n);
    printf("%d",z);
}
