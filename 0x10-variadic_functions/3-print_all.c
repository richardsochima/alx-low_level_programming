#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - this functions prints all it’s args
 *@format: this is the separator
 *Return: void
 */
void print_all(const char * const format, ...)
{
	char *str;
	int num, i = 0;
	char c, s;
	float float_num;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);

			break;
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			break;
		case 'f':
			float_num = (float)va_arg(args, double);
			printf("%f", float_num);
			break;
		default:
			break;
		}
		s = format[i];
		if (format[i + 1] != '\0' && (s == 'i' || s == 's' || s == 'f' || s == 'c'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
