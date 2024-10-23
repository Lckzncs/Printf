/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:39:15 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/23 12:54:21 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_number_hex(unsigned int n, int upper);
int	ft_printf(char const *format, ...);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_str(char *str);
int	ft_print_pointer_hex(void *ptr);
int	ft_print_number(int n);

#endif
