#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add at the end of the file
 * Return: 1 - if success
 * Else: 0 - if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
FILE *fp;
int result = -1;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

fp = fopen(filename, "a");
if (fp == NULL)
{
return (result);
}

if (fputs(text_content, fp) != EOF)
{
result = 1;
}

fclose(fp);
return (result);
}
