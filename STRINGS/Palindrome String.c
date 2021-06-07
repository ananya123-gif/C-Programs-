/********PROGRAM FOR FINDING IF THE GIVEN STRING IS PALINDROME******/
/*********AUTHOR : ANANYA SHUKLA, ADMISSION NO.:2019B101169*********/
/*******************************************************************/

#include<stdio.h>
#include<string.h>

/*******************************************************************/

int ispalindrome(char str1[30])
{
    char str2[30];
    int l=strlen(str1);
    int i,c=0;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    for(i=0;str1[i]!='\0';i++)
    {
        str1[i]=str1[l-i-1];
    }
    for (i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            c=1;
            break;
        }

    }
    return c;
}

/*******************************************************************/

int main()
{
    char str1[30]="ANANA";
    char str2[30]="ANANYA";
    int c,m;
    c=ispalindrome(str1);
    m=ispalindrome(str2);
    if(c==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
        printf("\n");
    if(m==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
/* **************/
/* ***************
ALGORITHM : is_palindrome(char str[30])
BEGIN:
        FOR i=1 To str[i]!='\0' DO
            COPY S1 in S2
        FOR i=1 To str[i]!='\0' DO
            reverse s1
        FOR i=1 To str[i]!='\0' DO
            IF str1[i]==str2[i] DO
                RETURN palindrome
            ELSE
                RETURN not palindrome
END;*/
