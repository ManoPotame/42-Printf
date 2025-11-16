/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:18:51 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/16 16:52:38 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/ft_printf.h"

static int	type_print(const char *format, va_list args)
{
	if (*format == 'c')
		return (print_char(va_arg(args, int)));
	else if (*format == 's')
		return (print_str(va_arg(args, char *)));
	else if (*format == 'p')
		return (print_pointer(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (*format == 'u')
		return (print_unsigned_nbr(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (print_nbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*format == 'X')
		return (print_nbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (*format == '%')
		return (print_char('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += type_print(format, args);
		}
		else
			count += print_char(format[0]);
		format++;
	}
	va_end(args);
	return (count);
}
