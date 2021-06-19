/**Program to print the following series 

A
BC
DEF
GHIJ
KLMNO

*/

#include<stdio.h>
void main()
{
    int i,j,n,c=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",65+c);
            c++;
        }
        printf("\n");
    }
}
