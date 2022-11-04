#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 * Return: always 0;
 *
 */
int main(int argc, char *argv[])
{
	int a;
	int b,
	int c;

	if (argc, != 3)
	{
		puts("Error")
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
