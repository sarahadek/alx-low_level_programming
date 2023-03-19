#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * return - success
 */
int main(void)
{
	char ch='a';

	while(ch<=z)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
