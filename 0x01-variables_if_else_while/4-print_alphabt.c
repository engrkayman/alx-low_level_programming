#include <stdio.h>

/**
 *  *  * main - Prints some letters of alphabet
 *   *   *
 *    *    * Return: Always (Success)
 *     **/
int main(void)
{
	char alpa;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')							putchar(alpha);
	}
	putchar('\n');
	return (0);
}
