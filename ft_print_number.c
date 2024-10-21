/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:14:46 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/16 18:32:59 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int		count;
	char	digit;

	count = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
		count++;
	}
	if (n >= 10)
	{
		count = count + ft_print_number(n / 10);
	}
	digit = (n % 10) + '0';
	if (write (1, &digit, 1) != 1)
		return (-1);
	count++;
	return (count);
}
/*
int	main (void)
{
	ft_print_number(12345);
	write (1, "\n", 1);
	ft_print_number(-12345);
	write (1, "\n", 1);
	ft_print_number(-2147483648);
	write (1, "\n", 1);
	return (0);
}
*/