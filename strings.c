#include "shell.h"

/**
 * _strlen - returns the length of a string.
 * @str: string to analyze
 * Return: i, length of s
 */

int _strlen(const char *str)
{
	size_t i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a new string that duplicates the string s.
 * @str: string to copy
 * Return: dest
 */

char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *str != '\0'; str++, i++)
	{
		p[i] = str[0];
	}
	p[i++] = '\0';
	return (p);
}

/**
 * _strchr - searches for a character in a string.
 * @str: string
 * @c: character to search
 * Return: null
 */

char *_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/**
 * _strcmp - compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: the difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	while (*s1 && *s2)
	{
		cmp = *s1 - *s2;
		if (cmp != 0)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (cmp);
}

/**
 * _strncmp - compares 2 strings up to n bytes.
 * @first: first string to compare
 * @second: second string to compare
 * @n: position
 * Return: dest
 */

int _strncmp(const char *first, const char *second, int n)
{
	int i;

	for (i = 0; first[i] && second[i] && i < n; i++)
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
	}
	return (0);
}
