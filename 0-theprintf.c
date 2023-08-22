#include "main.h"

/**
 * _print_char - Print a character.
 * @c: The character to print.
 * Return: Number of characters printed.
 */
int _print_char(char c)
{
write(1, &c, 1);
return (1);
}

/**
 * _print_string - Print a string.
 * @str: The string to print.
 * Return: Number of characters printed.
 */
int _print_string(char *str)
{
int len = _strlen(str);
write(1, str, len);
return (len);
}

/**
 * handle_conversion - Handles conversion specifiers in the format string.
 * @format: The format string.
 * @i: A Pointer to the current position in the format string.
 * @args: The va_list containing the variable arguments.
 * Return: The number of characters printed.
 */
int handle_conversion(const char *format, int *i, va_list args)
{
int j = 0;
return (j);
}

/**
 * _printf - printf function.
 * @format: Format string.
 * @...: A variable to print character.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int j = 0;
	const char *i = format;

	while (*i != '\0')
	{
		if (*i != '%')
		{
			write(1, i, 1);
			j++;
		}
		else
		{
			i++;
			if (*i == '\0')
				break;

			j += handle_conversion(format, &i, args);
		}
		i++;
	}

	va_end(args);
	return (j);
}

int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d]\n", len);

	_printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");

	_printf("Percent:[%%]\n");

	return (0);
}
