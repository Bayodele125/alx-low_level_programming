#include "main.h"
#include <stdio.h>

/**
*main -  prints the number of arguments passed into it.
*@argc: number of arg in command line.
*@argv: array of argc.
*Return: Always (0).
*/

int main(int argc, char *argv[])
{
	int n1, n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);
	return (0);
}