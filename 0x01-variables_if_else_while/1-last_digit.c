#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always (Success)
 */
int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of %d is int and is greater than 5\n", lastd);
}
else if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
return (0);
}

