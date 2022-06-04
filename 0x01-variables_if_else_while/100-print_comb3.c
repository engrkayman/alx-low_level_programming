#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  *  * main - Prints combination of numbers
 *   *   *
 *    *    * Return: Always (Success)
 *     **/
int main(void)
{
	int d;
	int l;

	for (d = '0'; d <= '9'; d++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			if (d < l)
			{
				putchar(d);
				putchar(l);

				if (d != '8' || (d == '8' && l != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
