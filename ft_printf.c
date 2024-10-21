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

static int ft_placeholder(char *pch, va_list *list)
{
    int count = 0;

    if (*pch == 'c')
        count = ft_print_char(va_arg(*list, int));
    else if (*pch == 's')
        count = ft_print_str(va_arg(*list, char *));
    else if (*pch == 'p')
        count = ft_print_pointer_hex(va_arg(*list, void *));
    else if (*pch == 'i' || *pch == 'd')
        count = ft_print_number(va_arg(*list, int));
    else if (*pch == 'u')
        count = ft_print_unsigned_int(va_arg(*list, unsigned int));
    else if (*pch == 'x')
        count = ft_print_number_hex(va_arg(*list, unsigned int), 0);
    else if (*pch == 'X')
        count = ft_print_number_hex(va_arg(*list, unsigned int), 1);
    else if (*pch == '%')
        count = ft_print_char('%');
    return count;
}

int ft_printf(char const *format, ...)
{
    va_list pch;
    int i = 0, count = 0;

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
#include <stdio.h>
/*
int main (void)
{
    char *str = "brasil";

    printf("original: %s\n", str);
    ft_printf("mi funcion: %s", str);
}
*/
/*
int main(void)
{
    char *str = "brasil";
    int num = 42;
    unsigned int unum = 123456789;
    void *ptr = &num;
    char ch = 'A';

    printf("Testing placeholders with ft_printf:\n");
    ft_printf("Character: %c\n", ch);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Integer: %d\n", num);
    ft_printf("Integer: %i\n", num);
    ft_printf("Unsigned Integer: %u\n", unum);
    ft_printf("Hexadecimal (lowercase): %x\n", unum);
    ft_printf("Hexadecimal (uppercase): %X\n", unum);
    ft_printf("Percentage: %%\n");

    return 0;
}
*/
