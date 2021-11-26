/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:41:38 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/22 10:21:44 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int number, int *ret)
{
	long	n;

	n = number;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-', ret);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, ret);
		ft_putnbr(n % 10, ret);
	}
	else
	{
		ft_putchar('0' + n, ret);
	}
}
