#include "main.h"

/**
 * print_alphabet - prints the alphabet from a-z
 *
 * Return: Always return 0
 */
 
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
        {
		_putchar(x);
	}
	
	_putchar("\n");
}
