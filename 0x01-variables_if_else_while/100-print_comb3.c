#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point 
 * Return: Always 0 (success)
 */

int main(void)

{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(d);
	if (d == '' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
