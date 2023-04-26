#include "main.h"

/** print_alphabet_x10 - prints the alphabet x10
 *
 * Return: always 0
 */

void print_alphabet_x10(void) 
{
	int count = 0;
	char letters;

	while(count++ <= 9)
		{
			for(letters = 'a'; letters <='z'; letters++)
				_putchar(letters);
			_putchar('/n');
		}
}

