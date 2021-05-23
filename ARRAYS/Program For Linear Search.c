/*********************PROGRAM FOR LINEAR SEARCH***********************/
/******AUTHOR:ANANYA SHUKLA, ADMISSION NO.2019B101169*****************/
/*********************************************************************/
#include<stdio.h>
int linearsearch(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        return i;
    }
    return -1;
}
/*********************************************************************/
int main(void)
{
    int i,n,x,a[100];
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter Elements of an array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the element which you want to search : ");
    scanf("%d",&x);
    int result=linearsearch(a,n,x);
    if(result==-1)
        printf("Element not exist in array");
    else
        printf("Element present at index %d",result);
}
