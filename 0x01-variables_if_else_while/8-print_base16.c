#include <stdio.h>

/**
 *main - Entry point
 *print hexadecimal in lowercase using putchar()
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int i = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
