#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *strng, *seperation = "";

	va_list lists;

	va_start(lists, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", seperation, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", seperation, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", seperation, va_arg(lists, double));
					break;
				case 's':
					strng = va_arg(lists, char *);
					if (!strng)
						strng = "(nil)";
					printf("%s%s", seperation, strng);
					break;
				default:
					a++;
					continue;
			}
			seperation = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(lists);
}
