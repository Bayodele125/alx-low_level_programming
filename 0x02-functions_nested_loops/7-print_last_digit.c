/*
 * File: 3-islower.c
 * Auth: BAYODELE FAITH B.O
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number..
 *@n: The character to be checked.
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
