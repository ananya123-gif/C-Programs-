/***PROGRAM FOR ARRAY INSERTION, DELETION & TRAVERSAL IN ARRAY*****/
/****AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169************/
/******************************************************************/

#include<stdio.h>

/******************************************************************/
void arrayinsertion(int A[],int *n,int i, int ele)
{
    int j;
    for (j= *n-1; j >= i; j--)
    {
        A[j+1]=A[j];
    }
    A[i] = ele;
    *n = *n + 1;
}

/******************************************************************/

void arraydeletion(int A[],int *n,int i)
{
    int j, x=0;
    x=A[i];
    for (j=i+1; j <= *n-1; j++)
    {
        A[j-1]= A[j];
    }
    *n = *n-1;
}

/******************************************************************/

void arraytraversal(int A[],int n)
{
    int i;
    for (i=0; i<=n-1; i++)
    {
        printf(" %d",A[i]);
    }
}

/******************************************************************/

int main()
{
    int n=5;
    int A[100]={2, 4, 6, 8, 9};
    arrayinsertion(A,&n,1,39);
    arraytraversal(A,n);
    printf("\n");
    arraydeletion(A,&n,4);
    arraytraversal(A,n);
}
