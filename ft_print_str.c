/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:40:11 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/23 12:44:59 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (write(1, &str[i], 1) != 1)
			return (-1);
		i++;
		count++;
	}
	return (count);
}
/*
int	main (void)
{
	char	*str = "hola mundo";

	ft_print_str (str);
	return (0);
}
*/
