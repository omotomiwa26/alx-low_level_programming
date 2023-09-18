#include <stdio.h>

int (*custom_printf)(const char *format, ...) = NULL;
int (*custom_puts)(const char *s) = NULL;

int custom_printf_impl(const char *format, ...)
{
	static int lucky_number = 0;

	if (!lucky_number)
	{
		printf("9 8 10 24 75 - 9\n");
		lucky_number = 1;
	}

	return (0);
}


int custom_puts_impl(const char *s)
{
	printf("Congratulations, You won the Giga Millions!!!\n");
	return (0);
}
