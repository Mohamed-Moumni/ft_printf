/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:14:03 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/21 16:17:38 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int number, int *ret)
{
	if (number > 9)
	{
		ft_putnbr_u(number / 10, ret);
		ft_putnbr_u(number % 10, ret);
	}
	else
	{
		ft_putchar(number + '0', ret);
	}
}
