#include "main.h"

/**
* print_rev - prints a string in stdout in reverse
* @s: string to print
* Return: void
*/
void print_rev(char *s)
{
	/* find lengthof string*/
	int i = 0;
	int len;

	for (len = 0; s[len] != '\0'; len++)

		;

	/* reverse string using the length */
	/* last element = len - 1 */

	for (i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
