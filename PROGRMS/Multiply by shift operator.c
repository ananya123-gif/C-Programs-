/***Write a Program to multiply two numbers, using shift operator***/

#include<stdio.h>
int multiply(int a,int b)
{
    int res=0;
    while(b>0)
    {
        if(b&1)
            res=res+a;
        a=a<<1;
        b=b>>1;
    }
    return res;
}

int main()
{
    int x,y,mul;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    mul=multiply(x,y);
    printf("Multiplication is : %d",mul);
}
