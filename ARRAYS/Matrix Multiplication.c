/****************PROGRAM FOR MATRIX MULTIPLICATION********************/
/*******AUTHOR : ANANYA SHUKLA, ADMISSION NO. :2019B101169************/
/*********************************************************************/

#include <stdio.h>
#define N 4

/*********************************************************************/

void multiply(int a[][N], int b[][N], int c[][N])
{
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < N; k++)
				c[i][j] += a[i][k]*b[k][j];
		}
	}
}

/*********************************************************************/

int main()
{
	int a[N][N] = { {1, 1, 1, 1},
					{2, 2, 2, 2},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};

	int b[N][N] = { {1, 1, 1, 1},
					{2, 2, 2, 2},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};

	int c[N][N];
	int i, j;
	multiply(a, b, c);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		printf("%d ", c[i][j]);
		printf("\n");
	}

	return 0;
}
