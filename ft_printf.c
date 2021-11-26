/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:30:18 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/24 16:45:21 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(char fmt, va_list args, int *ret)
{
	if (fmt == 'c')
		ft_putchar(va_arg(args, int), ret);
	else if (fmt == '%')
		ft_putchar('%', ret);
	else if (fmt == 's')
		ft_putstr(va_arg(args, char *), ret);
	else if (fmt == 'd' || fmt == 'i')
		ft_putnbr(va_arg(args, int), ret);
	else if (fmt == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), ret);
	else if (fmt == 'p')
		ft_print_adress(va_arg(args, unsigned long), ret);
	else if (fmt == 'x' || fmt == 'X')
		ft_print_hex(va_arg(args, unsigned int), ret, fmt);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		ret;
	int		i;

	i = -1;
	va_start(args, fmt);
	ret = 0;
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
			i++;
			ft_print(fmt[i], args, &ret);
		}
		else
		{
			ft_putchar(fmt[i], &ret);
		}
	}
	va_end(args);
	return (ret);
}
