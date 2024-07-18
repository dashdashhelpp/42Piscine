/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:10:23 by lnorris           #+#    #+#             */
/*   Updated: 2024/07/14 18:43:42 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*s;

	i = 1;
	while (i <= argc - 1)
	{
		s = argv[argc - 1];
		n = 0;
		while (s[n])
		{
			write (1, &s[n], 1);
			n++;
		}
		write (1, "\n", 1);
		argc--;
	}
}
