/*
 * File: 3-islower.c
 * Auth: BAYODELE FAITH B.O
 */

#include "main.h"

/**
 * _islower - Checks if a character is alphabet.
 *@c: The character to be checked.
 *
 * Return: 1 if character is letter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
