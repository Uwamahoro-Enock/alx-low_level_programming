#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all alphabets except e and q
 * Return: you're good to go
 */

int main(void)

{
	char enock, e, q;

	e = 'e';
	q = 'q';

	for (enock = 'a'; enock <= 'z'; enock++)
	{
	if (enock != e && enock != q)
	putchar(enock);
	}
	putchar('\n');
	return (0);
}
