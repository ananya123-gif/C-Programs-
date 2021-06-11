/****PROGRAM FOR HASH TABLE IMPLIMENTATION FOR BASIC HASH FUNCTION (WITHOUT COLLISIONS)***/
/*****AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169****/
/***********************************************************/

#include<stdio.h>
#include<math.h>

/***********************************************************/

int nearprime(int n)
{
 int c,i,j;
 for(j=n;j>0;j--)
    {
    c=0;
    for(i=1;i<=j;i++)
    {
    if(j%i==0)
    {c++;}
    }
    if(c==2)
    {
        return j;
        break;
     }
 }
}

/***********************************************************/

int length(long long n)
{
 int c=0;
 while(n!=0)
 {
    n=n/10;
    c++;
 }
 return c;
}

/***********************************************************/

int div(long long key,int size)
{
    int h,t;
    t=nearprime(size);
    h=key%t;
    return h;
}

/***********************************************************/

int mid(long long key,int t)
{
  long long n=key*key;
  int s=length(t)-1;
  int l=length(n)-s;
  int d;
  if(l%2==0)
  {
    d=l/2;
  }
  else
  {
     d=l/2+1;
  }
   n=n/pow(10,d);
   return n%t;
}

/***********************************************************/

int folding(long long key,int t)
{
    int sum=0;
    int n,r;
    n=key;
    while(n!=0)
    {
        r=n%t;
        sum=sum+r;
        n=n/t;
    }
    return sum%t;
}

/***********************************************************/

void main()
{
  int size=100;
  long n=7698471;
  printf("Division hash: %d",div(n,size));
  printf("\nMid Square hash:  %d",mid(n,size));
  printf("\nFolding hash :  %d",folding(n,size));
}
