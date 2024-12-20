/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:25:54 by lnorris           #+#    #+#             */
/*   Updated: 2024/06/30 23:22:35 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a, char b, char c, int cols);

void	rush(int cols, int rows)
{
	int	i;

	i = 1;
	while (i <= rows)
	{
		if (i == 1)
		{
			ft_putchar('o', '-', 'o', cols);
			i++;
		}
		else if (i >= rows)
		{
			ft_putchar('o', '-', 'o', cols);
			i++;
		}
		else
		{
			ft_putchar('|', ' ', '|', cols);
			i++;
		}
	}
}
