#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n,l_num;

srand(time(0));
n = rand() - RAND_MAX / 2;
l_num = (n % 10);
if (l_num > 5 )
printf("the last digit of %d is %d and it is greater than 5\n", n,l_num);
else if (l_num == 0)
printf("the last digit of %d is %d and it is equal to 0\n", n,l_num);
else if (l_num <! 0)
printf("the last digit of %d is %d,it is less than 6 and not equal to 0\n", n,l_num);
return (0);
}
