#include "3-calc.h"

/**
* main - function prints the result of calculated operations.
* @argc: The number of arguments passed to the program.
* @argv: Array of pointers to the arguments.
*
* Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num_1, num_2;
char *oprt;


if (argc != 4)
{
printf("Error\n");
exit(98);
}

num_1 = atoi(argv[1]);
oprt = argv[2];
num_2 = atoi(argv[3]);

if (get_op_func(oprt) == NULL || oprt[1] != '\0')
{
printf("Error\n");
exit(99);
}


if ((*oprt == '/' && num_2 == 0) || (*oprt == '%' && num_2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(oprt)(num_1, num_2));

return (0);
}
