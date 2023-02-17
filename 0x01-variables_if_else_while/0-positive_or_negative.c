#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To Determine whether a number is postive, negative or zero
 *
 * Return: always 0
 */

int main(void)
{
int x;

srand(time(0));
x = rand() - RAND_MAX / 2;
if (x > 0)
{
printf("%d is positive\n",x);
}
else if (x == 0)
{
printf("%d is zero\n",x);
}
else
{
printf("%d is negative\n",x);
}
return (0);
}
