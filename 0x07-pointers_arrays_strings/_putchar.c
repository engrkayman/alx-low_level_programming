#include <unistd.h>

/**
 * _putchar -writes the character c to stdout
 * @c: the charcter to be printed
 *
 * Return: 1 if successful
 * On error, value of -1 is returned and error message set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
