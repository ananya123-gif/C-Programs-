#include<stdio.h>
#define size 12
int a[size];
void start()
{
 int i;
 for(i=0;i<size;i++)
 {
    a[i]=-1;
 }
}
void insert(int key)
{
    int i,k;
    int p=key%size;

    if(a[p]==-1)
    {
        a[p]=key;
    }
    else
    {
        for(i=0;i<size;i++)
        {
            if(a[(p+i)%size]==-1)
            {
               a[(p+i)%size]=key;
               break;
            }
        }
    }
}
void traverse()
{
    int i;
    printf("\n|");
    for(i=0;i<size;i++)
    {
        if(a[i]==-1)
            a[i]=0;
    }
    for(i=0;i<size;i++)
    {
        printf("%d|",a[i]);
    }
 }

void main()
{
  int i;
  start();
  insert(3);
  insert(3);
  insert(5);
  insert(5);
  insert(9);
  insert(11);
  insert(10);
  insert(11);
  insert(10);
  traverse();
}
