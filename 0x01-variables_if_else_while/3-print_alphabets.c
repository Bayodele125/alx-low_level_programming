#include <stdio.h>
/**
*main - main function
*
*Return: return 0 (SUCCESS)
*/
int main(void)
{
	char ch;
	char i;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
