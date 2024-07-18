/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:51:53 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/17 17:18:33 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	mc;
	int	sum;

	i = 0;
	mc = 0;
	sum = 0;
	while (((str[i] <= 13 && str[i] >= 9) || str[i] == 32) && str[i])
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i])
	{
		if (str[i] == '-')
			mc++;
		i++;
	}
	while ((str[i] <= '9' && str[i] >= '0') && str[i])
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	if (mc % 2 != 0)
		sum = -sum;
	return (sum);
}
