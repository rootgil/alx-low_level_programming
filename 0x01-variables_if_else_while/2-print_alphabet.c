#include <stdio.h>
/*
	MAIN and RETURN
*/
int main(void)
{
	char alp[26]="abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<26;i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
