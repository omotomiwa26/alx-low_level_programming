#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char a;
int b;
long int c;
long long int d;
float e;
 
printf("The size of char is: %lu byte(s)\n", (sizeof(a)));
printf("The size of int is: %lu byte(s)\n", (sizeof(b)));
printf("The size of long int is: %lu byte(s)\n", (sizeof(c)));
printf("The size of long long int is: %lu byte(s)\n", (sizeof(d)));
printf("The size of float is: %lu byte(s)\n", (sizeof(e)));

}
