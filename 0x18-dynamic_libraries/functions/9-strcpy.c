#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * @dest: str  destination.
 * @src: str source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
