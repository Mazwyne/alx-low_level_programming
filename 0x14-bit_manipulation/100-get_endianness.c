#include "main.h"

/**
 * get_endianness - will check if a machine is little or big endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
