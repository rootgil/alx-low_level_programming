#include <stdio.h>
/*
Alphabet number in reverse
*/

int main(void)
{
	char alp[26]="abcdefghijklmnopqrstuvwxyz";
	for (int i=25;i>=0;i--)
		putchar(alp[i]);
	putchar('\n');
	return (0);
}
