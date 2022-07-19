#include "main.h"

/**
 * _memset - resets memory with constant byte
 * @s: input pointer to memory
 * @b: input constant to reset memory with
 * @n: input number of bytes to fill with byte
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int num = +n;

	for (i = 0; i < num; i++)
	{
		s[i] = b;
	}
	return (s);
}
