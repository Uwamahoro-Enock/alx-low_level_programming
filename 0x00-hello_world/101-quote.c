#include <unistd.h>
/**
 * main - This is the program that prints the sentence that was given
 * Return: 1 (you are done)
 */
int main(void)

{
	char *message1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message1, 59);
	return (1);
}
