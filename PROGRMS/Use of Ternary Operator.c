/**Use ternary operator to find out maximum of three given integers**/

#include<stdio.h>
void main()
{
    int x,y,z,m,max;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    m=x>y?x:y;
    max=m>z?m:z;
    printf("Maximum Number is : %d",max);
}
