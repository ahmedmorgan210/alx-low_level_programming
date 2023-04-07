#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
:wq * Return: printed string
*/

int string_end(int i, int j, char *s);
void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	if (j== 0)
	{
		string_end(i, j, s);
	}
	else
		if (i >= 0 && j > 0)
		{
			putchar(*s + i);
			i--;
			_print_rev_recursion(s - i);
		}
}
int string_end(int i, int j, char *s)
{
	if (*(s + i) != '\0')
	{
		printf("%c \n", *s);
		i++;
		string_end(i, j, s);
	}
	else
	{
		j += 1;
		return (i, j);
	}
	_print_rev_recursion(s + i);
}

