#include <stdio.h>
#include <stdlib.h>

/**
* main - program prints its own opcodes
* @argc: number of command line arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int bytes, a;
char *arr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");

exit(2);
}

arr = (char *)main;

a = 0;
while (a < bytes)
{
a++;
if (a == bytes - 1)
{
printf("%02hhx\n", arr[a]);
break;
}
printf("%02hhx ", arr[a]);
}
return (0);
}
