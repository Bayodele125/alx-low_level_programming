#include "main.h"
/**
*_isupper -  a function that checks for uppercase character.
*@c: character to be checked.
*/

int _isupper(int c)
{
	if (c <= 'z')
		return (1);
	else
		return (0);
}
