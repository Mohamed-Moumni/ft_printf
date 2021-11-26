/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:47:22 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/21 17:01:56 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adress(unsigned long number, int *ret)
{
	ft_putchar('0', ret);
	ft_putchar('x', ret);
	ft_print_p(number, ret);
}
