/*********PROGRAM FOR FINDING LENGTH OF STRING********************/
/******AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169*********/
/*****************************************************************/

#include <stdio.h>

/****************************************************************/

void Slen(char s1[])
{
    int i,l=0;
    for(i=0;s1[i]!=0;i++)
    {
        l++;
    }
    printf("Length of string %s is %d", s1, i);
}

/****************************************************************/

int main()
{
    char s1[100]="ANANYA SHUKLA";
    Slen(s1);
}
