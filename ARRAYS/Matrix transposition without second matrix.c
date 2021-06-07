/****Program for Matrix transposition without second matrix****/
#include<stdio.h>
void transpose(int [3][3]);
int main()
{
    int a[3][3];
    int i,j;
    printf("Given elements are:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    transpose(a);
    return 0;
}
void transpose(int a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[j][i]);
        }
        printf("\n");
    }
}
