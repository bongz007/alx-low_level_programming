#include <stdio.h>
/**
 * main - Entry Block
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; j++)
	{
		for (j = i + 1; j <= '9'; k++)
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i != '7' || j != '8' || k != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

