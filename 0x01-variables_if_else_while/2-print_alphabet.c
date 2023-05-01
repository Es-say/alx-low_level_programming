#include <stdio.h>

/**
 * main - Entry Point
 * Description - Prints the alphabet in lower case
 * Return: always 0
 */

int main (void)
{
	int n = 97; /* stores the ASCII value of the alphabet a */

	while (n <= 122) /* while the ASCII value of the alphabet is less than or equal to z */
	{
		putchar(n); 
		n++; /* increases the value in the variable n */
	}
	putchar('\n');
	return (0);
}
