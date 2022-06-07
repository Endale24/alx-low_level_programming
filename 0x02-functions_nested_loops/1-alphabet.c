#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet(void)
{
char abc = 'a';
do {
_putchar(abc);
abc++;
} while (abc <= 'z');
_putchar('\n');
}
