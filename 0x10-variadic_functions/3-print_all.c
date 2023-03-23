#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: lists types of arguments passed to the function
 * @...: all other types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", sep, va_arg(all, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(all, int));
				break;
				case 'f':
				printf("%s%f", sep, va_arg(all, double));
				break;
				case 's':
				str = va_arg(all, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
				default:
				i++;
				continue;
			}

			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(all);
}
