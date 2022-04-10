#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - starting point
  * void - retuns null
  *
  * n : will store a different value every time you run this program
  * Description :int main(void) returns a zero if correct
  *Return(0) : always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);

	return (0);
}

