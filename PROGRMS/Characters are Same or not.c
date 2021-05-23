/****WAP THAT ACCEPT TWO CHARACTERS FROM THE USER, AND PRINT MESSAGE THAT "BOTH CHARACTERS ARE SAME" 
IF BOTH ALPHABETS ARE SAME AND IN OPPOSITE CASE OTHERWISE CONVERT THE SECOND ALPHABET AS THE OPPOSTE
CASE OF THE FIRST ALPHABET*****/


#include<stdio.h>
void main()
{
    char a,b;
    printf("Enter two characters : ");
    scanf("%c %c",&a,&b);
    if(a==b+32 || a+32==b)
    {
        printf("Both Characters are Same");
    }
    else
    {
        char x=a;
        if(x>='A'&&x<='Z')
        {
            b=b+32;
            printf("After conversion : %c %c",a,b);
        }
        else if(x>='a'&&x<='z')
        {
            b=b-32;
            printf("After conversion : %c %c",a,b);
        }
    }
}
