/**PROGRAM FOR CONVERTING ALL LOWERCASE LETTERS TO UPPERCASE AND VICE VERSA**/
/***************AUTHOR : ANANYA SHUKLA, ADMISSION NO. : 2019B101169**********/
/****************************************************************************/

#include<stdio.h>
#include<string.h>

/****************************************************************************/

int main()
{
   char str[25]="Hello , How Are YoU???? \n";
   printf("%s",str);
   changecase(str);
}

/****************************************************************************/

void changecase(char str[])
{
    int i;
   for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
      else if(str[i]>=97&&str[i<=122])
        str[i]=str[i]-32;
   }
   printf("%s",str);
   return 0;
}
