/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:33:05 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/14 18:40:43 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	checkstr(int i, char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	found;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			found = checkstr(i, str, to_find);
			if (found > 0)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int	checkstr(int i, char *str, char *to_find)
{
	int	j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
