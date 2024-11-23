/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 23:15:54 by lnorris           #+#    #+#             */
/*   Updated: 2024/11/23 22:40:57 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char	*str)
{
	int		i;
	char	*dupe;

	i = 0;
	dupe = malloc(ft_strlen(str) + 1 * sizeof(char));
	if (dupe == NULL)
	{
		return (dupe);
	}
	while (str[i])
	{
		dupe[i] = str[i];
		i++;
	}
	dupe[i] = str[i];
	return (dupe);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*arr;

	i = 0;
	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
	{
		return (arr);
	}
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
