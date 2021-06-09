/**PROGRAM TO CHECK THE VALIDITY OF PARENTHESIZED ARITHMETIC
EXPRESSION USING STACK**/
/*****AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169**/
/**********************************************************/

#include<stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

/**********************************************************/

struct stack
{
    char item[SIZE];
    int top;
};

/**********************************************************/

struct stack S;

/**********************************************************/

void initialize(void)
{
    S.top=-1;
}

/**********************************************************/

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

/**********************************************************/

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

/**********************************************************/

int empty(void)
{
    if (S.top==-1)
        return TRUE;
    else
        return FALSE;
}

/**********************************************************/

char parenthesischeck(char exp[])
{
    initialize();
    int flag=1;
    int i=0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
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

/**********************************************************/

int main()
{
    char exp1[10]="())))((";
    printf("%s : ",exp1);
    parenthesischeck(exp1);
    char exp2[10]="((()))";
    printf("%s : ",exp2);
    parenthesischeck(exp2);
}

/**********************************************************/
