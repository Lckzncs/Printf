/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:39:38 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/23 12:41:33 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number_hex(unsigned int n, int upper)
{
	int		count;
	char	*base;

	count = 0;
	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		count = count + ft_print_number_hex(n / 16, upper);
	}
	write(1, &base[n % 16], 1);
	count++;
	return (count);
}
/*
int	main(void)
{
	ft_print_number_hex(13, 1);
	write(1, "\n", 1);
	ft_print_number_hex(14, 0);
	write(1, "\n", 1);
	ft_print_number_hex(0, 0);
	write(1, "\n", 1);
	return (0);
}
*/
