#include "main.h"

/**
 * *_strcpy - function copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer __src__ to
 * the buffer pointed to by **dest**
 * Return: Pointer to _dest_
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
