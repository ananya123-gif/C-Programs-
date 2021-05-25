/***********PROGRAM FOR RADIX SORT**************/
/***AUTHOR : ANANYA SHUKLA, AD NO. :2019B101169****/
/**************************************************/

#include <stdio.h>

void countingsort(int A[], int N, int k)
{
    int i;
    int B[N],C[k+1];
    for (i=0;i<=k;i++)
    {
        C[i]=0;
    }
    for (i=0;i<=N-1;i++)
    {
        C[A[i]]=C[A[i]]+1;
    }

    for (i=1;i<=k;i++)
    {
        C[i]=C[i]+C[i-1];
    }

    for (i=N-1;i>=0;i--)
    {
        B[C[A[i]]-1]=A[i];
        C[A[i]]=C[A[i]]-1;
    }
    for (i=0;i<N;i++)
        A[i]=B[i];
}

/****************************************************/

void radixsort(int A[],int N,int k)
{
    int i;
    for(i=1; k/i>0; i*=10)
    {
       countingsort(A,N,k);
    }
    printf("\nSorted Array is :");
    for(i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
}

/**************************************************/
int main()
{
    int A[100];
    int N,k,i;
    printf("Enter the number of elements in an array : ");
    scanf("%d",&N);
    printf("Enter elements of an array : ");
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
    k=A[0];
    for(i=1;i<=N;i++)
    {
        if(A[i]>k)
            k=A[i];
    }
    printf("Given array is : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    radixsort(A,N,k);
}
