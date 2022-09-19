#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @S: char input
 * Return: Length of the input string
 */
int _strlen(char *S)
{
	int i = 1, sum = 0;
	char pl = S[0];

	while (pl != '\0')
	{
		sum++;
		pl = S[i++];
	}
		return (sum);
}
