#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: pointer to the name of file to create
 * @text_content: pointer to string to wtite to file
 * Return: 1 - Success
 * Else: -1 - Error
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0, file_create;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[a] != '\0')
	{
		a++;
	}

	file_create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_create == -1)
		return (-1);

	write(file_create, text_content, a);

	return (1);
}
