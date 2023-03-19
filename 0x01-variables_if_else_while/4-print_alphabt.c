#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * return - success
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
