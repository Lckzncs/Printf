/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:46:55 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/17 13:55:58 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_print_char(int c);
int	ft_print_number_hex(unsigned int n, int upper);
int ft_printf(char const *, ...);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_str(char *str);
int	ft_print_pointer_hex(void *ptr);
int	ft_print_number(int n);

#endif
