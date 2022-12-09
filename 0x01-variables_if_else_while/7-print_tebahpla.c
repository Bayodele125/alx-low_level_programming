#include <stdio.h>
/**
*main - main function
*
*Return: ALWAYS 0
*/

int main () {
   char ch;

   for(ch = 'z' ; ch >= 'a' ; ch--)
        putchar(ch);
   putchar('\n');
   return (0);
}
