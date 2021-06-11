/***PROGRAM OF ARRAY IMPLEMENTATION OF LINEAR QUEUE*****/
/**AUTHOR : ANANYA SHUKLA; ADMISSION NO. :2019B101169***/
/*******************************************************/
#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 20
#define TRUE 1
#define FALSE 0
/*******************************************************/
struct queue
{
    int ITEM[MAXQUEUE];
    int REAR;
    int FRONT;
};
/*******************************************************/
struct queue Q;
/*******************************************************/
void initialize()
{
    Q.REAR=-1;
    Q.FRONT=0;
}
/*******************************************************/
int enqueue(int x)
{
    if(Q.REAR==MAXQUEUE)
    {
        printf("Queue Overflows");
        exit(1);
    }
    else
    {
        Q.REAR=Q.REAR+1;
        Q.ITEM[Q.REAR]=x;
    }
}
/*******************************************************/
int empty()
{
    if(Q.REAR-Q.FRONT+1==0)
        return TRUE;
    else
        return FALSE;
}
/*******************************************************/
int dequeue()
{
    if(empty())
    {
        printf("Queue Underflows");
        exit(1);
    }
    else
    {
        int x;
        x=Q.ITEM[Q.FRONT];
        Q.FRONT=Q.FRONT+1;
        return x;
    }
}
/*******************************************************/
void display()
{
    int i;
    if(Q.FRONT==-1)
        printf("Queue is Empty!!");
    else
    {
        printf("Queue is: ");
        for (i=Q.FRONT;i<=Q.REAR;i++)
            printf("%d ",Q.ITEM[i]);
    }
}
/*******************************************************/
void main()
{
   initialize();
   int choice,C;
   printf("Please select any option Given Below for Sorting : \n");
while(1)
   {
    printf("\n1. Enqueue\n2. Dequeue\n3. Empty\n4. Display\n5. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter item which you want to be Enqueue : ");
        scanf("%d",&C);
        enqueue(C);
        break;
    case 2:
        printf("Deleted item is : %d",dequeue());
        break;
    case 3:
        if(empty())
            printf("Stack is Empty");
        else
            printf("Stack is Not Empty");
        break;
    case 4:
        display();
        break;
    case 5:
        return 0;
    default:
        printf("\nPlease Select only 1-4 option ----\n");
    }
}
return 0;
}
/*******************************************************/
