#include "main.h"

/**
 * print_alphabet_x10 -make alphabet x10 times
 * Return: void
 */

void print _alphabet_x10(void)

{
	char c;
	int i =0;

	while (i <=9)
	{
	for (c = '0'; c <= 'z'; c++)
	{
	_putchar(c);

	_putchar('\n');
	i++;
	}
}
