#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *Main- beggining of program
  *
  *Return - end of program
*/

  int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n==0)
	{
		printf("%i is zero\n", n);
	}
	elseif (n<0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n",n);
	}
	return(0);
}
