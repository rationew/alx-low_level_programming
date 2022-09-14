#include "Holberton.h"
/**
*Description: Print the alphabet in lowercase
*Return Always 0 (success)
*/
void  print_alphabet(void)
{
	char alpha;
	for  (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar ('\n');
	return (0);
}	
