#include "main.h"

/**
 * _strdup - function copys string to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *ptr;
	int a, ret = 0;

	if (str == NULL)

		return (NULL);

	a = 0;

	while (str[a] != '\0')

		a++;

	ptr = malloc(sizeof(char) * (a + 1));

	if (ptr == NULL)

		return (NULL);

	for (ret = 0; str[ret]; ret++)

		ptr[ret] = str[ret];

	return (ptr);

}
