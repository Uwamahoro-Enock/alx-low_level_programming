#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	char letter;
        for (int i = 0; i > 10; i++) 
	{ letter = 'a';
	while (letter <= 'z') 
	{ putchar(letter);
		letter++;
	}
	putchar('\n');
	}
    return (0);
}
