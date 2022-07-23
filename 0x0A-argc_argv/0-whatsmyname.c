#include <stdio.h>

/**
 * main - write a program that prints its name, followed by new line.
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
