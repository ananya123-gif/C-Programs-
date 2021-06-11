/***PROGRAM OF ARRAY IMPLEMENTATION OF CIRCULAR QUEUE***/
/**AUTHOR : ANANYA SHUKLA; ADMISSION NO. :2019B101169***/
/*******************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10
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
struct queue CQ;
/*******************************************************/
void initialize()
{
    CQ.REAR=MAXQUEUE-1;
    CQ.FRONT=MAXQUEUE-1;
}
/*******************************************************/
int enqueue(int x)
{
    if((CQ.REAR+1)%MAXQUEUE==CQ.FRONT)
    {
        printf("Queue Overflows");
        exit(1);
    }
    else
    {
        CQ.REAR=(CQ.REAR+1)%MAXQUEUE;
        CQ.ITEM[CQ.REAR]=x;
    }
}
/*******************************************************/
int empty()
{
    if(CQ.REAR==CQ.FRONT)
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
        CQ.FRONT=(CQ.FRONT+1)%MAXQUEUE;
        x=CQ.ITEM[CQ.FRONT];
        return x;
    }
}
/*******************************************************/
void display()
{
    int i;
    if(empty())
        printf("Queue is Empty!!");
    else
    {
        printf("Queue is: ");
        for (i=CQ.FRONT;i!=CQ.REAR;i=(i+1)%MAXQUEUE)
            printf("%d ",CQ.ITEM[i]);
        printf("%d",CQ.ITEM[i]);
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
