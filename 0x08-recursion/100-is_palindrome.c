#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s:string
 * Retrun: the length of the string.
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: always 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is palindrome.
 * @s: string
 * Return: 1 if it's a palindrome. 0 otherwise.
 */
int is_palindrome(char *s)
{
	if  (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
