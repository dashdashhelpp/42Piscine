/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:53:54 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/17 19:54:46 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*s;

	i = 1;
	while (i < argc)
	{
		s = argv[i];
		n = 0;
		while (s[n])
		{
			write(1, &s[n], 1);
			n++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
