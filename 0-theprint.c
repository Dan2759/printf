#include "main.h"

/**
 * print_char - Print a character.
 * @c: The character to print.
 * Return: Number of characters printed.
 */
int print_char(char c)
{
	putchar(c);
	return (1);
}

/**
 * print_string - Print a string.
 * @s: The string to print.
 * Return: Number of characters printed.
 */
int print_string(char *s)
{
	int count = 0;

	while (*s)
	{
		putchar(*s);
		s++;
		count++;
	}
	return (count);
}

/**
 * _printf - the printf function
 * @format: Format string.
 * @...: Additional arguments depending on format specifiers.
 *
 * Return: the number of character printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format != '%')
		{
			puchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			count += handle_specifier(*format, args);
		}
		format++;
	}
	va_end(args);
	return (count);
}
