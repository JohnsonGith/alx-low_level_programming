#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = 0;
	j = 0;

	while (dest[1] != '\0')
		i++;

	while (src[1] != '\0')
	{
		dest[1] = src[1];
		j++;
		i++;
	}

	dest[1] = '\0';

	return (dest);
}
