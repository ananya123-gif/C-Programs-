/***PROGRAM FOR INFIX TO POSTFIX CONVERSION***/
/**AUTHOR : ANANYA SHUKLA, AD NO.:2019B101169*/
/*********************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
#define TRUE 1
#define FALSE 0

/*********************************************/

struct Stack
{
    char Item[SIZE];
    int TOP;
};

/*********************************************/

struct Stack S;

/*********************************************/
void Initialize()
{
    S.TOP=-1;
}
/*********************************************/

void push(char x)
{
        S.TOP++;
        S.Item[S.TOP]=x;
}

/*********************************************/

char pop()
{
    char x;
    x=S.Item[S.TOP];
    S.TOP--;
    return x;
}

/*********************************************/

char StackTop()
{
    char x;
    x=S.Item[S.TOP];
    return x;
}

/*********************************************/

int Empty()
{
    if(S.TOP==-1)
        return TRUE;
    else
        return FALSE;
}

/*********************************************/

int prcd(char op1, char op2)
{
    if(op1=='('||op2=='(')
            return FALSE;
    else
    {
        if(op2==')')
            return TRUE;
        else
        {
            if(op1=='^'||op1=='*'||op1=='/'||op1=='%')
            {
                if(op2=='^')
                    return FALSE;
                else
                    return TRUE;
            }
            else
            {
                if(op1=='+'||op1=='-')
                {
                    if(op2=='+'||op2=='-')
                        return TRUE;
                    else
                        return FALSE;
                }
            }
        }
    }
}

/*********************************************/

char infixtopostfix(char infix[])
{
	Initialize();
    int x,i=0,j=0;
    char postfix[SIZE];
    char symbol;

    while(infix[i]!='\0')
    {
        symbol=infix[i];
        i++;
        if(symbol>='a'&&symbol<='z'||symbol>='A'&&symbol<='Z'||symbol>='0'&&symbol<='9')
        {
            postfix[j]=symbol;
            j++;
        }
        else
        {
            while(!Empty() && prcd(StackTop(),symbol))
            {
                x=pop();
                postfix[j]=x;
                j++;
            }
            if(symbol==')')
                pop();
            else
                push(symbol);
        }
    }
    while(!Empty())
    {
        x=pop();
        postfix[j]=x;
        j++;
    }
    postfix[j]='\0';
    printf("Postfix Equivalent =>%s",postfix);
}

/*********************************************/

void main()
 {
    char infix[]="(a^2+B^2+2*A*b)";
    printf("Infix Expression =>%s\n",infix);
    infixtopostfix(infix);
 }

