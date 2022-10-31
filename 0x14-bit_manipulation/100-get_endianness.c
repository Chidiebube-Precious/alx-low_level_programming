#include "main.h"

/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;
	
	n = 1;
	c = (char *) &n;

	return ((int)*c);
}
