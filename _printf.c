#include <stdio.h>

int _printf(const char *format)
{
	unsigned int index;
	char print_index;
	int printed = 0;

	for (count = 0; format[index] != '/0')
		index++;
	
	if (format[index] == %)
		index++;
	
	printf_index = format[index];
	_putchar(print_index);
	printed++;

	else if (format[index] != %)
	return(printed);
}
