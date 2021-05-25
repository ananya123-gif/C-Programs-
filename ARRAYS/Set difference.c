/******PROGRAM FOR SET DIFFERENCE ***********/
/**AUTHOR :ANANYA SHUKLA, AD NO.:2019B101169*/
/********************************************/

#include<stdio.h>

/********************************************/

void Diff(int arr1[], int arr2[], int n, int m)
{
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf(" %d",arr1[i]);
			i++;
		}
		else if (arr2[j] < arr1[i])
		{
		    printf(" %d",arr2[j]);
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
}

/********************************************/

int main()
{
	int arr1[] = {2, 4, 5, 7, 8, 10, 12, 15};
	int arr2[] = {5, 8, 11, 12, 14, 15};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	Diff(arr1, arr2, n, m);
	return 0;
}
