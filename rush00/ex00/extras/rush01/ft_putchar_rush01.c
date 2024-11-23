/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_rush01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:12:46 by lnorris           #+#    #+#             */
/*   Updated: 2024/11/23 22:33:30 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, int cols)
{
	int	i;

	i = 1;
	write(1, &a, 1);
	while (i <= (cols - 2))
	{
		write(1, &b, 1);
		i++;
	}
	if (cols > 1)
		write(1, &c, 1);
	write(1, "\n", 1);
}
