/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:10:11 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/19 12:13:28 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_placeholder(char *pch, va_list *list)
{
	int	count;

	count = 0;
	if (*pch == 'c')
		count = ft_print_char(va_arg(*list, int));
	else if (*pch == 's')
		count = ft_print_str(va_arg(*list, char *));
	else if (*pch == 'p')
		count += ft_print_pointer_hex(va_arg(*list, void *));
	else if (*pch == 'i' || *pch == 'd')
		count += ft_print_number(va_arg(*list, int));
	else if (*pch == 'u')
		count += ft_print_unsigned_int(va_arg(*list, unsigned int));
	else if (*pch == 'x')
		count += ft_print_number_hex(va_arg(*list, unsigned int), 0);
	else if (*pch == 'X')
		count += ft_print_number_hex(va_arg(*list, unsigned int), 1);
	else if (*pch == '%')
		count = ft_print_char('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list		pch;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(pch, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count = count + ft_placeholder((char *)&format[++i], &pch);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(pch);
	return (count);
}
/* int main(void)
{
	ft_printf("Hello %s, your score is %d!", "Alice", 95);
	return (0);
} */