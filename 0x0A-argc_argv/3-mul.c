#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - Prints the multiplication of two args numbers
  *@argc: number of arg in command line.
  *@argv: array of argc.
  *Return: error if argc=0, else (0)
  */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
	}else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
