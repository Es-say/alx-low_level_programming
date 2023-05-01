#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description; using the main function
 * this program prints "alphabets except e and q"
 * Return: 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
