/**PROGRAM FOR DECIMAL TO ANY BASE CONVERSION**/
/*AUTHOR : ANANYA SHUKLA AD NO. :2019B101169*/
/******************************************/

#include<stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

/*****************************************/
struct stack
{
    char item[SIZE];
    int top;
};
/*****************************************/

struct stack S;

/*****************************************/

void initialize(void)
{
    S.top=-1;
}

/*****************************************/

int push(int x)
{
    if(S.top==SIZE-1)
    {
        printf("STACK OVERFLOW");
        return 0;
    }
    else
    {
        S.top++;
        S.item[S.top]=x;
    }
}

/*****************************************/

int empty(void)
{
    if (S.top==-1)
        return TRUE;
    else
        return FALSE;
}

/*****************************************/

int pop(void)
{
    int x;
    if(empty())
    {
        printf("STACK UNDERFLOW");
        return 0;
    }
    else
    {
        x=S.item[S.top];
        S.top--;
        return x;
    }
}

/*****************************************/

int any(int dec,int b)
{
    if(b==16)
    {
        initialize();
        char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        int r,x;
        while(dec!=0)
        {
            r=dec%16;
            push(r);
            dec=dec/16;
        }
        while(!empty())
        {
            x=pop();
            printf("%c",hex[x]);
        }
    }
    else
    {
        initialize();
        int r,x;
        while(dec>0)
        {
            r=dec%b;
            push(r);
            dec=dec/b;
        }
        while(S.top!=0)
        {
            x=pop();
            printf("%d",x);
        }
        printf("\n");
    }
}
/*****************************************/

int main(void)
{
    int dec=235,b1=2,b2=8,b3=16;
    printf("The number is :%d\n",dec);
    printf("When Base is 2 : ");
    any(dec,b1);
    printf("When Base is 8 : ");
    any(dec,b2);
    printf("When Base is 16 : ");
    any(dec,b3);
}

