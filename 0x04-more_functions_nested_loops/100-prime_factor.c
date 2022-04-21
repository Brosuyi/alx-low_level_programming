#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the largest prime factor of 612852475143
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	n = 612852475143;
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			n = n / i;
		else
			i++;
	}
	printf("%d\n", i);
	return (0);
}
