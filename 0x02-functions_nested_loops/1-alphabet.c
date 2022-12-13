/**
* File: 1-alphabet.c
*
* AUTH: BAYODELE FAITH B.O
*/

#include "main.h"

/**
 * main - Prints "the alphabet in lowercase"  followed by a new line.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
