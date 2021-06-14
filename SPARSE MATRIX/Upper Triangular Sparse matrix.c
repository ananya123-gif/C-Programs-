/***PROGRAM FOR 1-D ARRAY IMPLEMENTATION OF UPPER TRIANGULAR SPARSE MATRIX***/
/*****AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169********************/
/****************************************************************************/
#include<stdio.h>

/****************************************************************************/

void upper(int mat[3][3],int row,int col)
{
    int i,j,k=0,c[100];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j>=i)
            {
                c[k]=mat[i][j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf(" %d",c[i]);
    }
}

/****************************************************************************/

void main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int row=3;
    int col=3;
    upper(a,row,col);
}
