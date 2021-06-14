/***PROGRAM FOR 1-D ARRAY IMPLIMENTATION OF TRIDIAGONAL SPARSE MATRIX***/
/******AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169**************/
/***********************************************************************/

#include<stdio.h>
void upper(int a[], int m , int n)
{
    int i,j,k=0;
    int mat[10][10];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         mat[i][j]=a[k];
         k++;
        }
    }
    lower(mat,m,n);
}

/***********************************************************************/

void lower(int mat[10][10],int m,int n)
{
    int i , j;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==j)
            {
                    printf("%d ",mat[i][j]);
			}
			else if (j-i==1)
            {
                printf("%d ",mat[i][j]);
			}
			else if (i-j==1)
            {
                printf("%d ",mat[i][j]);
			}
            else
            {
             printf("0 ");
            }
		}
		printf("\n");
	}
}

/***********************************************************************/

int main()
{
    int a[40]={1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
    upper(a,5,5);
}
