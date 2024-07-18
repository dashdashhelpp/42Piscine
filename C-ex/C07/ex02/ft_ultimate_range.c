/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:27:33 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/16 18:39:11 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		res;
	int		*fuck;

	res = max - min;
	i = 0;
	if (min >= max)
		return (0);
	fuck = malloc(res * sizeof(int));
	if (fuck == NULL)
		return (-1);
	while (min < max)
	{
		fuck[i] = min;
		i++;
		min++;
	}
	*range = fuck;
	return (res);
}
