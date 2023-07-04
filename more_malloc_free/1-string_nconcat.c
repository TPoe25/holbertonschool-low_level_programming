#include "main.h"

/**
 * string_nconcat - funcation that allocates memory while concat 2 strings
 * @s1: char pt
 * @s2: char pt
 * @n: int
 * Return: cat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int i;
	unsigned int str = n;
	int cat = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		n++;

	concat_str = malloc(sizeof(char) * (str + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat_str[cat] = s1[i];
		cat++;
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		concat_str[cat] = s2[i];
		cat++;
	}

	concat_str[cat] = '\0';

	return (concat_str);
}
