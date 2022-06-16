#include "main.h"
/**
 * _strncpy - copies the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 * 
 * Return: the parameter dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
