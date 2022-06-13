#include "main.h"
/**
* _strlen - returns the length of a string.
* @k: character value.
* Return: i value
*/
int _strlen(char *k)
{
	int i;

	for (i = 0; k[i] != 0; i++)
		;
	return (i);
}
