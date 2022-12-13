/*
* File: 2-print_alphabet_x10.c
* Auth: BAYODELE FAITH B.O
*/

#include "main.h"

/**
*print_alphabet - print 10 times the alphabet in lowercase, followed by a new line.
*/

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
	_putchar('\n');
}
