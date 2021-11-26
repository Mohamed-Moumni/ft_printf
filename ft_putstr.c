/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:38:14 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/22 10:27:54 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *ret)
{
	int	i;

	if (str == NULL)
		ft_putstr("(null)", ret);
	else
	{
		i = 0;
		while (str[i])
			ft_putchar(str[i++], ret);
	}
}
