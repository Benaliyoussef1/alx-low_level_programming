#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
#include "holberton.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The integer that was converted
 */
int _atoi(char *s)
{
	int i, start, negative;
	unsigned int number;

	start = -1;
	negative = 0;
	number = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			start = i;

		if (s[i] == '-' && start == -1)
		{
			if (negative)
				negative = 0;
			else
				negative = 1;
		}
	}

	if (start != -1)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				number = number * 10 + s[i] - '0';
			else if (s[i - 1] >= '0' && s[i - 1] <= '9')
				break;
		}
	}

	if ((number >= (unsigned int) INT_MAX && negative == 0))
		return (INT_MAX);
	else if ((number > (unsigned int) INT_MAX && negative))
		return (INT_MIN);
	else if (negative)
		return ((int) -number);
	else
		return ((int) number);
}
