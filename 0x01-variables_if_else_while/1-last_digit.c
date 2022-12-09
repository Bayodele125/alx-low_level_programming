#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - main function
*
*Return: return 0 (SUCCESS)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/* let l represent last digit of n */
	int l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	} else
	{
		printf("Last digit od %d is %d and is 0\n", n, l);
	}
	return (0);
}
