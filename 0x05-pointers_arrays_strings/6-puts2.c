#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int i;

	while (*(str + i))

	{
		 _putchar(*(str + i));
		 i = i + 2;
	}
	_putchar('\n');
}
