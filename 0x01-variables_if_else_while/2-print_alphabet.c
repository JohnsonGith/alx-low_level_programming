#include <stdio.h>

/**
 * main - prints the alphabet in lowerecase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
