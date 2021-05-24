/*****Use ternary operator to check whether a character is in uppercase or lowercase*****/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    (ch>='a' && ch<='z') ? printf("%c is Lowercase",ch) :
        (ch>='A' && ch<='Z') ? printf("%c is Uppercase",ch) : printf("%c is not alphabet",ch);
    return 0;
}
