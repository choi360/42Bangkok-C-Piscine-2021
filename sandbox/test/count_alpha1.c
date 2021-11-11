/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:46:48 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/11 13:24:56 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_count_alpha(char *s, int i, int hm, int count)
{
	int		j;
	char	c;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (hm++ > 0)
				printf(", ");
			c = s[i];
			j = i;
			count = 0;
			while (s[j])
			{
				if (s[j] == c)
				{
					s[j] = ' ';
					count++;
				}
				j++;
			}
			printf("%d%c", count, c);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			i++;
		}
		ft_count_alpha(av[1], 0, 0, 0);
	}
	printf("\n");
	return (0);
}
