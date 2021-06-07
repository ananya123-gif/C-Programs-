/*****PROGRAM FOR REVERSING THE GIVEN STRING**************/
/******AUTHOR :ANANYA SHUKLA, ADMISSION NO.2019B101169****/
/*********************************************************/

#include<stdio.h>

/*********************************************************/

void main()
{
    char str[100]="ANANYA";
    printf("The original string is %s\n", str);
    Srev(str);
}

/*********************************************************/

int Srev(char str[100])
{
    int i,j,k;
    char rev[100];
    for(i = 0; str[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    printf("The reverse string is %s\n", rev);
}
