/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:37:11 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/11 19:55:54 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	fn_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		fn_write('-');
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		fn_write(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		fn_write(nb % 10 + '0');
	}
}
