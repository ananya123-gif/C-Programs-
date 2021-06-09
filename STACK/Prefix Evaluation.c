/***EVALUATION OF PRIFIX EXPRESSION USING STACK***/
/**AUTHOR : ANANYA SHUKLA, AD NO.: 2019B101169****/
/*************************************************/

#include<stdio.h>
#include<math.h>
#define SIZE 100
#define TRUE 1
#define FALSE 0

/*************************************************/

struct Stack
{
    int item[10];
    int Top;
};

/*************************************************/

struct  Stack S;

/*************************************************/

void initialize(void)
{
  S.Top=-1;
}

/*************************************************/

void push(char x)
{
    if(S.Top==SIZE-1)
    {
        printf("STACK OVERFLOW");
        return;
    }
    else
    {
        S.Top++;
        S.item[S.Top]=x;
    }
}

/*************************************************/

int pop( )
{
    int x;
    x=S.item[S.Top];
    S.Top--;
    return x;
}

/*************************************************/

int StackTop(void)
{
    int m;
    m=S.item[S.Top];
    return m;
}

/*************************************************/

int empty(void)
{
    if (S.Top==-1)
        return TRUE;
    else
        return FALSE;
}

/************************************************/

int Evaluate(int a,int b, char op)
{
    switch(op)
    {
        case '+': return a+b; break;
        case '-': return a-b; break;
        case '*': return a*b; break;
        case '/': return a/b; break;
        case '%': return a%b; break;
        case '^': return pow(a,b); break;
    }
}

char reverse(char str[])
{
    S.Top=-1;
    int i=0;
    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    i=0;
    while(!empty())
    {
        str[i]=pop();
        i++;
    }
    printf("\n%s",str);
}

/*************************************************/

void pri(char *p)
{
    initialize();
    reverse(p);
    int value,a,b,i=0;
    char symbol;
    while(p[i]!='\0')
    {
        symbol=p[i];
        if (symbol>='0' && symbol<='9')
        {
            push(symbol-'0');
        }
        else
        {
            a=pop();
            b=pop();
            value=Evaluate(a,b,symbol);
            push(value);
        }
        i++;
    }
    printf("\nEvaluated value is : %d",StackTop());
    printf("\n\n");
}

/*************************************************/

int main()
{
    char prifix1[20]="+*345";
    char prifix2[20]="*-+*3937^25";
   // char prifix3[20]="*^7-1614^-24214";
    printf("Prifix Expression is : %s",prifix1);
    pri(prifix1);
    printf("Prifix Expression is : %s",prifix2);
    pri(prifix2);
    //printf("Prifix Expression is : %s",prifix3);
    //pri(prifix3);
}
