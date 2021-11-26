/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:55:55 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/24 16:59:25 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int number, int *ret, char c)
{
	if (number >= 16)
	{
		ft_print_hex(number / 16, ret, c);
		ft_print_hex(number % 16, ret, c);
	}
	else
	{
		if (c == 'x')
			ft_putchar(HEXA_BASE[number], ret);
		else if (c == 'X')
			ft_putchar(HEXA_BASEUPPER[number], ret);
	}
}
