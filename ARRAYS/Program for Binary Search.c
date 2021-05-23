/***************PROGRAM FOR BINARY SEARCH****************************/
/******AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169************/
/********************************************************************/

#include<stdio.h>
int Bsearch(int A[], int n, int x)
{
   int l = 0;
   int h = n-1;
   while(l<=h)
    {
      int mid = (l+h)/2;
      if( A[mid] == x)
        {
         return mid;
        }
      else if( x < A[mid] )
        {
         h = mid-1;
        }
      else
        {
         l = mid+1;
        }
   }
   return -1;
}

/**********************************************************************/

int Bsearch(int A[], int n, int x);
int main()
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
    printf("After Binary Search : ");
    printf("\n%d is found at Index %d \n",x,Bsearch(a,n,x));
    return 0;
}
