#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - print both small and capital letters
 * Return: you're good to go
 */

int main(void)

{
	char enock;

	for (enock = 'a'; enock <= 'z'; enock++)
	putchar(enock);

	for (enock = 'A'; enock <= 'Z'; enock++)
	putchar(enock);
	putchar('\n');

	return (0);
}
