/**Program for Finding set elements of A that belongs to set B**/
/***************************************************************/
#include <stdio.h>
int same(int a1[], int a2[], int m, int n)
{
	int i = 0, j = 0,c[10],k;
	while (i < m && j < n)
    {
		if (a1[i] < a2[j])
			i++;
		else if (a2[j] < a1[i])
			j++;
		else
		{
			c[k]=a2[j];
			i++;
		}
        for(i=0;i<k;i++)
        {
            printf("%d",c[i]);
        }
  }
}
/***************************************************************/
int main()
{
	int a1[] = { 1, 2, 4, 5, 7 };
	int a2[] = { 2, 3, 5, 7 };
	int m = sizeof(a1) / sizeof(a1[0]);
	int n = sizeof(a2) / sizeof(a2[0]);
	same(a1, a2, m, n);
	return 0;
}
