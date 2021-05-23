/****************GIVEN AN INPUT (x), WAP TO PRINT IT'S RECIPROCAL
VALUE (1/x) NEGATED VALUE (-x) AND SQUARE (x^2) OF IT***********/

#include<stdio.h>
void main()
{
    int x,neg,sq;
    float rec;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    rec=1.0/x;
    neg=-x;
    sq=x*x;
    printf("%.2f\n",rec);
    printf("%d\n",neg);
    printf("%d",sq);
}
