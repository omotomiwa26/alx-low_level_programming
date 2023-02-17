#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
char b;
float c;

printf("The size f int is: %lu byte(s)\n", (sizeof(a)));
printf("The size of char is: %lu byte(s)\n", (sizeof(b)));
printf("The size of float is: %lu byte(s)\n", (sizeof(c)));
}
