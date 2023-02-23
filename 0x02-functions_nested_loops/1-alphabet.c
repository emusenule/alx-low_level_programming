#include "main.h"

/**
 * print_alphabet - function that print alphabet in lower case
 *
 * Return: always 0;
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char) i);
	}
		_putchar('\n');
}
