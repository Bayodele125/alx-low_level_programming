/*
* File: 2-print_alphabet_x10.c
* Auth: BAYODELE FAITH B.O
*/

#include "main.h"

/**
*print_alphabet_x10 - print 10 times the alphabet in lowercase,with new line.
*/

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
