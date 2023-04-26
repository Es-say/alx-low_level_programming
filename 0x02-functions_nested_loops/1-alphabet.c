#include "main.h"
void print_alphabet(void);
/**
 * print_alphabet - prints the alphabet from a-z
 *
 * Return: Always return 0
 */
 
int main (void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
        	_putchar(x);
	
	_putchar("\n");
}
