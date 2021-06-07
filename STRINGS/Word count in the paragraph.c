/****PROGRAM FOR FINDING WORD COUNT IN THE PARAGRAPH*****/
/******AUTHOR : ANANYA SHUKLA,AD NO. :2019B101169********/
/********************************************************/

#include <stdio.h>

#define OUT 0
#define IN 1

/********************************************************/

unsigned countWords(char *str)
{
	int state = 0;
	unsigned wc = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
		++str;
	}
	return wc;
}

/********************************************************/

int main()
{
	char str[] = "One two		six three\n four\tfive ";
	printf("No of words : %u", countWords(str));
	return 0;
}
