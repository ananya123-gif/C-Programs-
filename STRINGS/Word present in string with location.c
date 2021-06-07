/***PROGRAM FOR FINDING IF THE GIVEN WORD IS PRESENT IN THE
SENTENCE AND AT WHAT LOCATION***/
/****AUTHOR: ANANYA SHUKLA; ADMISSION NO.:2019B101169****/
/********************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
/********************************************************/
int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j,n=0, found;
    int strLen, wordLen;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any word to search: ");
    gets(word);
    wordcheck(str,word);
}
/********************************************************/
wordcheck(char str[MAX_SIZE],char word[MAX_SIZE])
{
    int i, j,n=0, found;
    int strLen, wordLen;
    strLen  = strlen(str);
    wordLen = strlen(word);
    for(i=0; i<strLen - wordLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
            n++;
        }
    }
    printf("Word comes %d times",n);
    return 0;
}
/********************************************************/
