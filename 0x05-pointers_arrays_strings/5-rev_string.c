#include "main.h"
/**
 *rev_string - function that reverses a string.
 *@s: string
 *
 *Return: Always 0.
 */
void rev_string(char *s)
{
	char rv = s[0];
	int cnt = 0;
	int i;

	while (s[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
	{
		cnt--;
		rv = s[i];
		s[i] = s[cnt];
		s[cnt] = rv;
	}
}
