/**************PROGRAM FOR QUICK SORT****************/
/****AUTHOR : ANANYA SHUKLA, AD NO. : 2019B101169****/
/****************************************************/

#include<stdio.h>

/**************************************************/

void swap (int* a,int* b)
{
    int t= *a;
    *a = *b;
    *b = t;
}

/***************************************************/

int partition(int a[], int low, int high)
{
    int i=low;
    int j=high+1;
    int pivot = a[low];
    do
    {
        do
            i++;
        while (a[i] < pivot);
        do
            j--;
        while (a[j] > pivot);
        if (i<j)
        {
            swap(&a[i],&a[j]);
        }
    }
    while(i<j);
    {
        swap(&a[j],&a[low]);
    }
    return j;
}

/**************************************************/

void quicksort(int a[],int low,int high)
{
    if (low<high)
    {
        int j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}

/**************************************************/

void printarray(int a[],int high)
{
    int i;
    for(i=0;i<high;i++)
    {
        printf("%d ",a[i]);
    }
}

/*******************************************************/

int main()
{
    int a[6]={234,453,143,78,54};
    a[6]=32767;
    int i,low=0;
    int high=4;
    printf("Given Array is: ");
    for (i=0;i<5;i++)
        printf("%d ",a[i]);
    quicksort(a,low,high);
    printf("\nSorted Array is: ");
    printarray(a,high+1);
}
