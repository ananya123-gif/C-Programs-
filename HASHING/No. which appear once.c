#include<stdio.h>

void Element_once(int A[],int C[],int k)
{
    int i,j;
    printf("\nElements once occurred: ");
   for(i=0;i<=k;i++)
   {
       if(C[i]==1)
       {
          printf("%d ",i);
       }
   }
}

void counting_sort(int A[], int N, int k)
{
    int i,B[N],C[k+1];
    for(i=0;i<=k;i++)
    {
        C[i]=0;
    }
    for(i=0;i<=N-1;i++)
    {
        C[A[i]]=C[A[i]]+1;
    }
    Element_once(A,C,k);
}
int main()
{
    int A[]={7,2,0,5,1,0,3};
    int N,k,i;
    N=7;
    k=A[0];
    for(i=1;i<N;i++)
    {
        if(k<A[i])
          k=A[i];
    }
    printf("Original array: ");
    for(i=0;i<N;i++)
        printf("%d ",A[i]);
    counting_sort(A,N,k);
    printf("\n\n");

    int B[]={7,2,1,0,1,2,0,3,4,5,6,1,3,7,8,0,1,2};
    N=18;
    k=B[0];
    for(i=1;i<N;i++)
    {
        if(k<B[i])
          k=B[i];
    }
    printf("Original array: ");
    for(i=0;i<N;i++)
        printf("%d ",B[i]);
    counting_sort(B,N,k);
    printf("\n");
    return 0;
}
