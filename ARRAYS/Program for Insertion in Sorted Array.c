/*************PROGRAM FOR INSERTION IN SORTED ARRAY****************************/
/***************AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169*************/
/******************************************************************************/
#include<stdio.h>
/******************************************************************************/
int isort(int a[],int n,int x)
{
    int i=n-1;
    while(x<a[i] && i>=0)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;
    n++;
    printf("\nAfter insertion :\n");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);
}

/******************************************************************************/

void main()
{
    int i;
    int a[]={10,20,30,40,50};
    int n=5;
    printf("Given sorted array is :\n");
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    int x=35;
    isort(a,n,x);
}
