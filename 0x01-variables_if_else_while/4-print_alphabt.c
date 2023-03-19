#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * return - success
 */
int main(void)
{
	char ch;
	
		for (ch = 'a'; ch <= 'z'; ch++;)
		{
			 putchar(ch);
		}
		while(ch<=z)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		
	}
	putchar('\n');
	return (0);
}
