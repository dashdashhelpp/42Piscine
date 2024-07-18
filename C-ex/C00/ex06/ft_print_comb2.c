/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:22:56 by lnorris           #+#    #+#             */
/*   Updated: 2024/06/27 18:05:25 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				d = c + 1;
				while (d <= '9')
				{
					write (1, &a, 1);
					write (1, &b, 1);
					write (1, &c, 1);
					write (1, &d, 1);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
