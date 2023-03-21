#include <unistd.h>

/**
 * main -print the putchar
 * Return: 0 (successful)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
