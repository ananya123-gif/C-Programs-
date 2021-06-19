/***Write a Program to find the factorial of the given integer number ***/

#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>0;i--)
    {
        printf("%d * ",i);
        fact= fact*i;
    }
    printf("%d",i);
    printf("\n\nFactorial is : %d",fact);
}
