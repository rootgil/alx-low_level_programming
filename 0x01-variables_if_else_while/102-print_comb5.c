#include <stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 48, op1, op2;

	while (i < 58)
	{
		j = 48;
		while  (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				k = 48;
				while (l < 58)
				{
					op1 = (i * 10) + j;
					op2 = (k * 10) + l;
					if (op1 < op2)
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 && k == 57 && l == 57)
							break;
						putchar(',');
						putchar(' ');
						l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

