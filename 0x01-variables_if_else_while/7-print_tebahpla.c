#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  *  * main - Program exec start here
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
		putchar(reverse);
	putchar('\n');

	return (0);
}
