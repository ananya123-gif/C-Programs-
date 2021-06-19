/*Program to print the following series

*
**
***
****
*****

*/


#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
