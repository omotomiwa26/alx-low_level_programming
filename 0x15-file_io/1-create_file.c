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

FILE *fp;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";



	fp = fopen(filename, "w");
	{
	if (fp == NULL)
		return (-1);
	}
	fprintf(fp, "%s", text_content);
	fclose(fp);

	return (1);
}
