/**PROGRAM FOR STACK PRIMITIVE OPERATIONS***/
/*AUTHOR : ANANYA SHUKLA AD NO. :2019B101169*/
/******************************************/

#include<stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

/*****************************************/
struct stack
{
    int item[SIZE];
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

void push(int x)
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

int pop(void)
{
    int x;
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

/*****************************************/

int stacktop(void)
{
    int x;
    x=S.item[S.top];
    return x;
}

/*****************************************/

void display()
{
    int i,c;
    if(S.top==-1)
        printf("Stack is empty!");
    else
    {
        printf("Stack (From Top to Bottom) is : ");
        for(i=S.top;i>=0;--i)
            printf("%d ",S.item[i]);
    }
}

/*****************************************/
int main()
{
   initialize();
   int choice;
   int C;
   printf("Please select any option Given Below for Sorting : \n");
while(1)
   {
    printf("\n1. Push\n2. Pop\n3. StackTop \n4. Empty\n5. Display\n6. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter item which you want to be pushed : ");
        scanf("%d",&C);
        push(C);
        break;
    case 2:
        printf("Poped item is : %d",pop());
        break;
    case 3:
        printf("Stacktop item is : %d",stacktop());
        break;
    case 4:
        if(empty())
            printf("Stack is Empty");
        else
            printf("Stack is Not Empty");
        break;
    case 5:
        display();
        break;
    case 6:
        return 0;
    default:
        printf("\nPlease Select only 1-4 option ----\n");
    }
}
return 0;
}
