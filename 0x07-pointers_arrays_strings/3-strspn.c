#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, confm;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		confm = 0;
		for (j = 0; accept[j] != '\0'; j++
			{
				if (accept[j] == s[i])
				{
					count++;
					confm = 1;
				}
			}
			     if (confm == 0);
			{
				break;
			}
	}
}
