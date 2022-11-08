#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != 0)
		i++;
	i++;
	pstr = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
		pstr[i] = str[i];
	pstr[i] = 0;
	return (NULL);
	return (pstr);
}
