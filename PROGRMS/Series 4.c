/**Write a Program to find the sum of the series
     res = 1/1! + 2/2! + 3/3! +......+ n/n!
**/

#include<stdio.h>
/*************************************************/
int fact(int n)
{
    int i;
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
/*************************************************/
void main()
{
    int i,n,res=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=n/fact(n)+res;
    }
    printf("Res is : %d",res);
}
