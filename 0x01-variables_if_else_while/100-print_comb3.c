#include <stdio.h>

/**
  * main - prints all possible combinations of two digits
  * Return: Always 0
  */

int main(void)
{
	int k, l;

	for (k = 48; k <= 56; k++)
	{
		for (l = 49; l <= 57; l++)
		{
			if (l > k)
			{
				putchar(k);
				putchar(l);
				if (l != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
