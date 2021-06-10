#include<stdio.h>
int gcd(a,b)
{
    if(a==b)
        return a;
    else
        if(a>b)
            gcd(a-b,b);
        else
            gcd(a,b-a);
}
void main()
{
    int a=51,b=15;
    int z;
    printf("The value of a :%d\n",a);
    printf("The value of b :%d\n",b);
    z=gcd(a,b);
    printf("%d",z);
}
