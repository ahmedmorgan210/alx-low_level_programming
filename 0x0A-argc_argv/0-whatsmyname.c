#include "main.h"
#include <stdio.h>

/**
 * main - it prints the program name
 * @argc: the count of argument's word
 * @argv: the string
 * Return: (0) is successful
*/

/*int main(__attribute__((unused)) int argc, char *argv[])*/
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("wrong input");
		return (1);
	}
	printf("%s \n", argv[0]);
	return (0);
}

