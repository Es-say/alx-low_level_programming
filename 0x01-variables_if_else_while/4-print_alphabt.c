#include <stdio.h>

/**
 * main - Entry Point
 * Description - prints the alphabets except e and q
 * return: always 0
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
