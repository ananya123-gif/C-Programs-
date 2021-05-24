/*********************PROGRAM FOR BUBBLE, SELECTION AND INSERTION SORT *************************/
/**************AUTHOR : ANANYA SHIUKLA, ADMISSION NO.:2019B101169*******************************/
/***********************************************************************************************/

#include<stdio.h>
void display(int a[],int n);
void bubble_sort(int a[],int n);
void selection_sort(int a[],int n);
void insertion_sort(int a[],int n);
int main()
{
   int n;
   printf("Enter the number of elements in array");
   scanf("%d",&n);
   int choice,i;
   int arr[100];
   printf("Enter elements of an array");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Given array is :\n");
   for(i=0; i<n; i++)
   {
       printf(" %d",arr[i]);
   }
   printf("\nPlease select any option Given Below for Sorting : \n");
while(1)
   {
    printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        bubble_sort(arr,n);
        break;
    case 2:
        selection_sort(arr,n);
        break;
    case 3:
        insertion_sort(arr,n);
        break;
    case 4:
        return 0;
    default:
        printf("\nPlease Select only 1-4 option ----\n");
    }
}
return 0;
}

/***********************************************************************************************/

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d ",arr[i]);
   }
}

/***********************************************************************************************/

void bubble_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
      }
  }
printf("After Bubble sort Elements are : ");
display(arr,n);
}

/***********************************************************************************************/

void selection_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
printf("After Selection sort Elements are : ");
display(arr,n);
}

/***********************************************************************************************/

void insertion_sort(int arr[],int n)
{
    int i,j,min;
    for(i=1;i<n;i++)
    {
        min=arr[i];
        j=i-1;
        while(min<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=min;
    }
printf("After Insertion sort Elements are : ");
display(arr,n);
}
