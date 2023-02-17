#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0
 */

int main(void)
{
int d, p;
for (d = '0'; d < '9'; d++)

putchar((d % 9) + '0');
for (p = d + 1; p <= '9'; p++)
putchar(p);
putchar('\n')
return (0);
}
