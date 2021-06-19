/**Print the following Series

* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
