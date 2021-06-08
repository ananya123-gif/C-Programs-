/**PROGRAM FOR DECIIMAL TO BINARY CONVERSION**/
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

int binary(int dec)
{
    initialize();
    int r,x;
    while(dec!=0)
    {
        r=dec%2;
        push(r);
        dec=dec/2;
    }
    printf("\nBinary Equivalent of is :");
    while(!empty())
    {
        x=pop();
        printf("%d",x);
    }
}
/*****************************************/

int main(void)
{
    int dec=23;
    printf("Number is %d",dec);
    binary(dec);
}

