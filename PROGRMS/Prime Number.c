/**Write a Program to check if a Given Number is Prime or not**/

#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("Enter the value which you want to Check : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("%d is Prime Number",n);
    else
        printf("Not Prime Number");
}
