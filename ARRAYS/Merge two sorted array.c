/**********Program for Merging of two Sorted Arrays***********/
/*****AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169*****/
/*************************************************************/
#include <stdio.h>
int merge(int a1[], int a2[], int m, int n)
{
	int i = 0, j = 0, k = 0;
	int c[m+n];
	while (i < m && j < n)
    {
		if (a1[i] < a2[j])
        {
            c[k]=a1[i];
            i++;
            k++;
        }
      else
		{
			c[k]=a2[j];
			k++;
			j++;
		}
	}
	while (i < m)
    {
        c[k]=a1[i];
        k++;
        i++;
    }
	while (j < n)
    {
        c[k]=a2[j];
        k++;
        j++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}
int main()
{
	int a1[] = { 1, 2, 4, 5, 6 };
	int a2[] = { 2, 3, 5, 7 };
	int m = sizeof(a1) / sizeof(a1[0]);
	int n = sizeof(a2) / sizeof(a2[0]);
	merge(a1, a2, m, n);
	return 0;
}
