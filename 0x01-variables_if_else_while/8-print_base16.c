#include <stdio.h>
/*
print all number in base 16
*/

int main(void)
{
	char base16[16] = "0123456789abcdef";
	for (int i=0;i<16;i++)
		putchar(base16[i]);
	putchar('\n');
	return (0);
}
