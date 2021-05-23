/**** WAP THAT ACCEPT STUENT ROLL NO AND AVERAGE MARKS FORM THE USER AND PRINT THE RESULT AND GRADE OF THE
STUDENT AS PASS IF AVERAGE IS GREATER THEN 35 AND GRADE AS ('A' FOR >=85,85>'B'>=60,60>'C'>=50 ELSE 'D')***/

#include<stdio.h>
void main()
{
    int rollno,avg;
    printf("Enter your roll no. : ");
    scanf("%d",&rollno);
    printf("Enter your Average Marks : ");
    scanf("%d",&avg);
    if(avg>35)
    {
        printf("PASS\n");
    if(avg>=85)
        printf("Grade is : A");
    else if(avg<85 && avg>=60)
        printf("Grade is : B");
    else if(avg<60 && avg>=50)
        printf("Grade is : C");
    else if(avg<50 && avg>=35)
        printf("Grade is : D");
    }
    else
        printf("FAIL");
}
