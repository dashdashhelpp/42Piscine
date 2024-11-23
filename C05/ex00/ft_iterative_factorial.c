/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:15:08 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/15 16:39:06 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = nb;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > i)
	{
		res *= (nb - i);
		i++;
	}
	return (res);
}
