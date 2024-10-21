/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:40:33 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/16 20:29:09 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int n)
{
	char	digit;
	int		count;

	count = 0;
	if (n >= 10)
	{
		count = count + ft_print_unsigned_int(n / 10);
	}
	digit = '0' + (n % 10);
	if (write(1, &digit, 1) != 1)
		return (-1);
	count++;
	return (count);
}
/*
int	main (void)
{
	ft_print_unsigned_int(-10);
	write (1, "\n", 1);
	ft_print_unsigned_int(10);
	write (1, "\n", 1);
	ft_print_unsigned_int(0);
	write (1, "\n", 1);
}
*/
