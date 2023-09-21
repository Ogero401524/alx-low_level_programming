#include "main.h"
/**
 *_atoi - convert string to and integer
 *@s : pointer to convert
 *Return :integer
 */
int _atoi(char *s)
{
	int i = 0;
	int min = 1;
	int j = 0;
	int a = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			a = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (a == 1)
		{
			break;
		}
		i++;
	}
	j *= min;
	return (j);
}
