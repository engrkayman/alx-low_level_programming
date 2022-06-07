#include "main.h":
#include <unistd.h>
/**
 * * print_alphabet prints lowercase chars
 *
 * */
int _putchar (int ch)

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')

	{
		_putchar(alpha);
		alpha++;

	}

	_putchar('\n');

}
