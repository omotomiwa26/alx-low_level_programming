#include "main.h"

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array string
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
