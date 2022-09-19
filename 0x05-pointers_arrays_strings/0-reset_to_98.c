#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int and updates
 * @n: The pointer to an int
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int *ptr;

	ptr = n;

	*ptr = 98;
}
