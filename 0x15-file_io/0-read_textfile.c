#include "main.h"

/**
 * read_textfile - function reads a text file and prints it
 * @filename: pointer to name of file
 * @letters: number of letters to read and print
 * Return:  actual number of letters
 * Else: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t file, r, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	r = read(file, text, letters);

	w = write(STDOUT_FILENO, text, r);

	close(file);

	return (w);
}
