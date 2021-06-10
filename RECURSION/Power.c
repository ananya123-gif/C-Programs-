/****PROGRAM FOR COMPUTING a RAISED TO THE POWER n USING DIVIDE AND CONQUER****/
/************AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169***************/
/******************************************************************************/

#include<stdio.h>

/******************************************************************************/

int power(int a, unsigned int b)
{
    if (b == 0)
        return 1;
    else if (b%2 == 0)
        return power(a, b/2)*power(a, b/2);
    else
        return a*power(a, b/2)*power(a, b/2);
}

/******************************************************************************/

int main()
{
    int a = 2;
    unsigned int b = 10;

    printf("%d", power(a, b));
    return 0;
}
