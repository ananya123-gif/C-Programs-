/********PROGRAM FOR TOWER OF HANOI FOR N DISK (USER DEFINED) **********/
/*****AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169***************/
/***********************************************************************/

#include<stdio.h>

/***********************************************************************/

void ToH(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("\nTransfer disk from :%c to %c",A,C);
        return;
    }
    else
        ToH(n-1,'A','C','B');
        printf("\nTransfer disk form :%c to %c",A,C);
        ToH(n-1,'B','A','C');
}

/***********************************************************************/

void main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    ToH(n,'A','B','C');
    return 0;
}
