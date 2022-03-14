#include <stdio.h>
/*
	print a digit in base 10
*/

int main(void)
{
	char num[10]="0123456789";
	for (int i=0 ; i<10 ; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
