#include <stdio.h>
/*
	MAIN and RETURN
*/
int main(void)
{
	char alp[26]="abcdfghijklmnoprstuvwxyz";
	for(int i=0;i<24;i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
