#include <stdio.h>

/**
 * main - Entry Point
 * Description - Prints alphabet in lowercase and uppercase
 * Return: always 0
 */

int main(void)
{
	int n = 97; /* ASCII for a */
	int m = 65; /* ASCII for A */

	while (n <= 122) /* ASCII for z */
{
	putchar(n);
	n++;
}
	while (m <= 90) /* ASCII for Z */
{
	putchar(m);
	m++;
}
	putchar('\n');
	return (0);
}
