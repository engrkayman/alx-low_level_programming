#include "main.h"
#include <unistd.h>
/**
 * * print_alphabet prints lowercase chars
 *
 * */

/**
 *main - check the code
 * *
 * *
 * *Return: Always 0;
 * */
void print_alphabet(void);

int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')

	{
		_putchar(alpha);
		alpha++;

	}

	_putchar('\n');

	return (0);

}
