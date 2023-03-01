#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0(success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
