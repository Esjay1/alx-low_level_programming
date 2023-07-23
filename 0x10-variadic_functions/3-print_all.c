#include "variadic_functions.h"

/**
 * print_all - print all arguments
 * @format: the argument type specifier
 *
 * Return: the argument given
 */
void print_all(const char * const format, ...)
{
	int i, status;
	char *str;
	va_list ansr;

	va_start(ansr, format);
	i = 0;
	while (format != NULL && format[i] != ('\0'))
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ansr, int));
				status = 0;
				break;
			case 'f':
				printf("%f", va_arg(ansr, double));
				status = 0;
				break;
			case 'c':
				printf("%c", va_arg(ansr, int));
				status = 0;
				break;
			case 's':
				str = va_arg(ansr, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				status = 1;
				break;
		}
		if ((format[i + 1]) != '\0' && status == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ansr);
}
