#include "main.h"

/**
 * _strstr - function locates a substring.
 * @haystack: character string to be searched.
 * @needle: character substring to be located.
 *
 * Return: If the substring is located - a pointer to the
 * beginning of the located substring.
 * Else - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return (NULL);
}
