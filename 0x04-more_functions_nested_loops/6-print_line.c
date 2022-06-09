#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 *
 * Return: empty
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
