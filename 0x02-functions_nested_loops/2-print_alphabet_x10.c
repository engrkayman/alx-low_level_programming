#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/

void print_alphabet_x10(void);
{
	int count;
	int alpha;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
