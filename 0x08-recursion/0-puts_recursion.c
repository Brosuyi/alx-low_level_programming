#include "main.h"

/**
 * _puts_recursion - prints a string followed by newline
 * @s: input string to print
 *
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		/* ASCII value for new line is 10*/
		_putchar(10);
	else
	{
		/* print first element of string*/
		_putchar(s[0]);
		/* move string and keep recursion going */
		s++;
		_puts_recursion(s);
	}
}
