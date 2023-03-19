#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet except q and e
 *
 * return - success
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	
	{
		putchar(alp[i]);
	}
	
	putchar('\n');
	return (0);
}
