/***PROGRAM TO REVERSING ALL WORDS IN A SENTENCE***/
/****AUTHOR : ANANYA SHUKLA AD NO. :2019B101169****/
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

void push(char x)
{
    if(S.top==SIZE-1)
    {
        printf("STACK OVERFLOW");
        return;
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

char pop(void)
{
    char x;
    if(empty())
    {
        printf("STACK UNDERFLOW");
        return;
    }
    else
    {
        x=S.item[S.top];
        S.top--;
        return x;
    }
}

char reverse(char str[])
{
    S.top=-1;
    int i=0,j=0;
    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    while(!empty())
    {
        char x=pop();
        printf("%c",x);
    }
}

/**********************************************/

int main()
{
    char str[]="ANANYA";
    reverse(str);
}
