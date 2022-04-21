#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9 followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') || (i != 4))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
