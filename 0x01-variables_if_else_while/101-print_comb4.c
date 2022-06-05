#include <stdio.h>
#include<time.h>
#
/**
 *  **main - Prints combination of numbers
 *   **Return: Always (Success)
 *    **/
int main(void)
{
	int k, l, m;

	for (k = '0'; k <= '9'; k++)
	{
		for (l = '0'; l <= '9' ; l++)
		{
		for (m = '0'; m <= '9'; l++)
		{
			if (k < l && l < m)
			{
				putchar(k);
				putchar(l);
				putchar(m);
				if (k != '7')
				{

					putchar(',');
					putchar(' ');

				}
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
