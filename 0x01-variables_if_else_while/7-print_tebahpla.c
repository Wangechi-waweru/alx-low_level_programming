#include <stdio.h>

/**
  * main - prints the alphabet in reverse, and lowercase
  * followed by a new line
  * Return: Always 0
  */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
