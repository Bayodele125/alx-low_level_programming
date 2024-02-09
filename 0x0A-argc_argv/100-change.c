#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make 
  *change for an amount of money.
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
  int n = 0;

  if (argc == 2)
  {
    n = atoi(argv[1]);
    printf("%d\n", n % 6 );
  }
  else if (atoi(argv[1]) == 0)
  {
    printf("%d\n", n);
  }
  else
  {
    printf("Error\n");
    return (1);
  }
  return (0);
}