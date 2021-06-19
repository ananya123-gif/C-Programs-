/**Write a program to find the sum of the series where n is user input
        Sum = 1+2+3+......+n
**/

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is : %d",sum);
}
