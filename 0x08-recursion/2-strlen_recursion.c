#include "main.h"
/**
 *_strlen_recursion  - Entry point
 *@s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
