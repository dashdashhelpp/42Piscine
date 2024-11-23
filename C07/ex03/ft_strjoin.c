/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:03:09 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/17 17:08:30 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_append(char *append_to, char *str)
{
	int		temp;
	int		i;

	i = 0;
	temp = ft_strlen(append_to);
	while (str[i])
	{
		append_to[temp + i] = str[i];
		i++;
	}
	append_to[i + temp] = '\0';
	return (append_to);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_length;
	char	*str;

	i = 0;
	total_length = 0;
	if (size == 0)
		str = "";
	while (i < size)
	{
		total_length += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	i = 0;
	str = malloc(total_length + 1 * sizeof(char));
	if (str == NULL)
		return (0);
	while (i < size)
	{
		str = str_append(str, strs[i]);
		if (i < size - 1)
			str_append(str, sep);
		i++;
	}
	return (str);
}
