#include "main.h"

/**
 * print_alphabet - all in lowercase followed by new line
 */

void print_alphabet(void)
{
char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
