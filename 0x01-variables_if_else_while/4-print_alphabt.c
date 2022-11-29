#include <stdio.h>

/**
 *main - Entry point
 *Description: prints lowercase alphabets except e and q with \n
 *Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	c++;
	putchar ('\n');

	return (0);
}
