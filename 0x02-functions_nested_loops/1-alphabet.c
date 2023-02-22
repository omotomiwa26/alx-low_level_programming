/**
* print_lower_case_alphabets - Entry point
*
* Return: Always 0 (Success)
*/

void print_lower_case_alphabets(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
