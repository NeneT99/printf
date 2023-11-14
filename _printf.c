#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{
	int charactersthatwewillprint = 0;
	va_list listofourarguments;
	
	if(format == NULL)
	{
		return(-1);
	}
	va_start(listofourarguments, format);

	/*looping through our format of characters*/
	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
			charactersthatwewillprint++;
		}
		else
		{
			format++;
		}
		if(format == '\0')
		{
			break;

		}
		if(format == 'c')
		{
			int num = va_arg(listofourarguments, int);
			write(1 , num, strlen(num));
		
		}
		if(format == 's')
		{
			strlen()

		}
		if(format == '%')
		{

		}

	}





	va_end;

