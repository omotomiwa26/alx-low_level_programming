#include "main.h"
/**
 * file_check - function checks if files can be opened
 * @file_from: file to check from
 * @file_to: file to check to
 * @argv: pointer to arguments vector
 * Return: 0 if success
 * Else - exit
 */

void file_check(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program copies contents
 * of a file to another
 * @argc: arguments contant of file
 * @argv: pointer to arry arguments vector
 * Return: 0 - if succes
 * Else: exit
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t nos_chars, nos_read;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_check(file_from, file_to, argv);

	nos_chars = 1024;
	while (nos_chars == 1024)
	{
		nos_chars = read(file_from, buf, 1024);
		if (nos_chars == -1)
			file_check(-1, 0, argv);

		nos_read = write(file_to, buf, nos_chars);
		if (nos_read == -1)
			file_check(0, -1, argv);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
