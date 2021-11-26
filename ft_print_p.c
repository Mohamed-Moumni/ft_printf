/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:52:55 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/24 17:00:30 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(unsigned long number, int *ret)
{
	if (number >= 16)
	{
		ft_print_p(number / 16, ret);
		ft_print_p(number % 16, ret);
	}
	else
	{
		ft_putchar(HEXA_BASE[number], ret);
	}
}
