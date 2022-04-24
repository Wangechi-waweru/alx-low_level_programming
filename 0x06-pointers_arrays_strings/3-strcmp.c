#include "main.h"

/**
  * _strcmp - compares two strings
i  * @s1: first string to compare
  * @s2: second string to compare
  *
  * Return: less than 0 if s1 is less than s2, 0 if they're equal,
  * more than 0 if s1 is greater thsn s2
  */
int _strcmp(char *s1, char *s2)
{
	int j = 0, k = 0;

	while (k == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + j) == '\0'))
			break;
		k = *(s1 + 1) - *(s2 + j);
		j++;
	}
	return (k);
}
