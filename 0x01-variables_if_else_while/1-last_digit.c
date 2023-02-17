/**
 * main - Prints the last digit of a randomly generated number
 *
 * and whether it is greater than 5, less than 6, or 0
 *
 * Return: Always 0
 */

int main(void)
{
int x;

srand(time(0));
x = rand() - RAND_MAX / 2;

if ((x % 10) > 5)
{
printf("last digit of %d is %d and i greater than 5\n",
		x, x % 10);
}
else if ((x % 10) < 6 && (x % 10) != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n",
		x, x % 10);
}
else
{
printf("last digit of %d is %d and is 0\n",
		x, x % 10);
}
return (0);
}
