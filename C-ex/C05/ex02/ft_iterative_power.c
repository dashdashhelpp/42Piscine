/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:27:20 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/15 16:42:49 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power <= 0)
		return (0);
	while (i < power)
	{
		nb *= temp;
		i++;
	}
	return (nb);
}
