/*PROGRAM FOR FINDING SET ELEMENTS OF A THAT DOES NOT BELONGS TO SET B*/
/******AUTHOR :ANANYA SHUKLA, ADMISSION NO. :2019B101169***************/
/**********************************************************************/

#include<stdio.h>

/**********************************************************************/

void diff(int a[],int b[], int m,int n)
{
    int i=0,j=0;
    for(i=0;i<m;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf(" %d",a[i]);
        }
    }
}

/**********************************************************************/

int main()
{
    int a[]={1,2,3,4};
    int b[]={2,4,6,8,10};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    diff(a,b,m,n);
}
