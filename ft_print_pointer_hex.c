/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:39:52 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/23 12:43:53 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count = count + ft_hex(n / 16);
	}
	if (write(1, &base[n % 16], 1) != 1)
		return (-1);
	count++;
	return (count);
}

int	ft_print_pointer_hex(void *ptr)
{
	unsigned long	a;
	int				count;

	count = 0;
	a = (unsigned long)ptr;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	if (write(1, "0x", 2) != 2)
		return (-1);
	count = count + 2;
	count = count + ft_hex(a);
	return (count);
}
/*
int	main (void)
{
	unsigned long int nb = 12;
	ft_print_pointer_hex(&nb);
	write(1, "\n", 1);
	return (0);
}
*/
