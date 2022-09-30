#include "main.h"
#include <stdio.h>

/**
 * main - print the nukber of arguments
 * @argc: argument count
 * @argc: pointer to arguments
 *
 * Return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
