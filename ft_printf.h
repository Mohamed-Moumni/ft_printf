/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:31:38 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/24 16:47:16 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_BASE "0123456789abcdef"
# define HEXA_BASEUPPER "0123456789ABCDEF"
# include<stdlib.h>
# include<unistd.h>
# include<stdarg.h>

void	ft_print_adress(unsigned long number, int *ret);
void	ft_print_hex(unsigned int number, int *ret, char c);
void	ft_print_p(unsigned long number, int *ret);
void	ft_putchar(char c, int *ret);
void	ft_putnbr(int number, int *ret);
void	ft_putnbr_u(unsigned int number, int *ret);
void	ft_putstr(char *str, int *ret);
int		ft_printf(const char *fmt, ...);
void	ft_print(char fmt, va_list args, int *ret);

#endif
