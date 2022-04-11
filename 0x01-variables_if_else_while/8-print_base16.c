#include <stdio.h>

/**
  * main - prints all numbers of base 16 in lowercase,
  * followed by a new line
  * Return: Always 0
  */
int main(void)
{
	int n;
	char i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
