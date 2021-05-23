/**PROGRAM TO FIND THE NUMBER WHICH IS NOT REPEATED IN ARRAY OF INTEGERS,
                OTHERS ARE PRESENT FOR TWO TIMES**/
/**********AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169***********/
/***********************************************************************/

#include<stdio.h>

/***********************************************************************/

int findSingle(int ar[], int ar_size)
    {
        int res = ar[0];
        for (int i = 1; i < ar_size; i++)
            res = res ^ ar[i];
        printf("%d",res);
    }

/***********************************************************************/

int main()
    {
        int ar[] = {3, 2, 5, 4, 5, 3, 4};
        int n = sizeof(ar) / sizeof(ar[0]);
        printf("Element occurring once is ");
        findSingle(ar, n);
        return 0;
    }
