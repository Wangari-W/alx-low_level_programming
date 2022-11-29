#include <stdio.h>

/**
 * main - Entry point
 * print 0123456789 with putchar only
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar ('\n');

	return (0);
}
