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
FILE *fp;
ssize_t bytes_read = 0;
char *buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
{
perror("malloc");
return (0);
}

fp = fopen(filename, "r");
if (fp == NULL)
{
perror("fopen");
free(buffer);
return (0);
}

while ((bytes_read = fread(buffer, sizeof(char), letters, fp)) > 0)
{
fwrite(buffer, sizeof(char), bytes_read, stdout);
}

fclose(fp);
free(buffer);

return (bytes_read);
}
