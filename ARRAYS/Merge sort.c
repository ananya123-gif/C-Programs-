/*******************PROGRAM FOR MERGE SORT********************/
/*****AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169*****/
/*************************************************************/
#include<stdio.h>
int C[100];

/*************************************************************/

int mergearray(int A[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    while( i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else
        {
            C[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        C[k]=A[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++)
    {
        A[i]=C[i];
    }
}

/*************************************************************/

int mergesort(int A[],int low,int high)
{
    if(low<high)
    {
        int i;
        int mid =(low + high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        mergearray(A,low,mid,high);
    }
}

/*************************************************************/

void main()
{
    int A[]={125,321,435,543,235,978,654,397,789,321,111};
    int i,low=0,high=sizeof(A)/sizeof(A[0])-1;
    printf("Given Array is : ");
    for(i=0;i<=high;i++)
    {
        printf("%d ",A[i]);
    }
    mergesort(A,low,high);
    printf("\nSorted Array is : ");
    for(i=low;i<=high;i++)
    {
        printf(" %d",A[i]);
    }
}
