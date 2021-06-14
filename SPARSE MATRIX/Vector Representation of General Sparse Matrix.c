/*****PROGRAM FOR VECTOR REPRESENTATION OF GENERAL SPARSE MATRIX*****/
/*******AUTHOR :ANANYA SHUKLA, ADMISSION NO.:2019B101169*************/
/********************************************************************/

#include<stdio.h>

/********************************************************************/

int rep(int m,int n,int M[m][n])
{
    int i,j,k=1;
    int N[10][3];
    int x,y,z,l=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]!=0)
            {
                N[k][0]=i;
                N[k][1]=j;
                N[k][2]=M[i][j];
                k++;
                l++;
            }
        }
    }
    N[0][0]=m;
    N[0][1]=n;
    N[0][2]=l;
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",N[i][j]);
        }
        printf("\n");
    }
}

/********************************************************************/

void main()
{
    int m=3;
    int n=3;
    int M[3][3]={{1,0,0},{0,6,7},{0,0,0}};
    rep(m,n,M);
}
