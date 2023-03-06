#include "main.h"

/**
 * print_chessboard - fucntion prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j;

while (a[i][7])
{
j = 0;
while (j < 8)
{
putchar(a[i][j]);
j++;
}
printf("\n");
i++;
}
}
