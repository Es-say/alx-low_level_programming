#include "main.h"

/**
 * print_alphabet - prints the alphabet from a-z
 *
 * Return: Always return 0
 */
 
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
        	_putchar(letters);
	
	_putchar('\n');
}

int main (void)
	print_alphabet();
	return (0);

