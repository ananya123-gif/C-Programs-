/***PROGRAM TO CHECK THE VALIDITY OF BRACKETED ARITHMETIC
EXPRESSION USING STACK***/
/***AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169***/
/********************************************************/

#include<stdio.h>
#define max 50
#define TRUE 1
#define FALSE 0

/********************************************************/

struct stack
{
    char stk[max];
    int top;
};

/********************************************************/

struct stack s;

/********************************************************/

void initialize(void)
{
    s.top=-1;
}

/********************************************************/

void push(char x)
{
    s.top++;
    s.stk[s.top]=x;
}

/********************************************************/

char pop(void)
{
    char x;
    x=s.stk[s.top];
    s.top--;
    return x;
}

/********************************************************/

int empty(void)
{
    if (s.top==-1)
        return TRUE;
    else
        return FALSE;
}

/********************************************************/

char bracketed(char exp[])
{
    initialize();
    int i=0;
    int flag=1;
    while(exp[i]!='\0')
    {
        if((exp[i]=='(')||(exp[i]=='[')||(exp[i]=='{'))
            push(exp[i]);
        else if((exp[i]==')')||(exp[i]==']')||(exp[i]=='}'))
        {
            if(!empty())
            {
                pop();
            }
            else
            {
                flag=0;
                break;
            }
        }
        i++;
    }
    if(empty())
    {
        if(flag==0)
        {
            printf("Wrong Expression");
        }
        else
        {
            printf("Right Expression");
        }
    }
    else
    {
        printf("Wrong Expression");
    }
    printf("\n");
}

/********************************************************/

int main()
{
    char exp1[10]="[{()}]";
    printf("%s :",exp1);
    bracketed(exp1);
    char exp2[10]="[{[{)}";
    printf("%s :",exp2);
    bracketed(exp2);
}
/********************************************************/
