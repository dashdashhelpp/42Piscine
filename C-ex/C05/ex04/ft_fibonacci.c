/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:17:51 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/17 17:14:14 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 2 || index == 1)
		return (1);
	res = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (res);
}
