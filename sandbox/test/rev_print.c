/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:04:34 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/29 15:34:02 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		len--;
		while (i < len)
		{
			tmp = av[1][i];
			av[1][i] = av[1][len];
			av[1][len] = tmp;
			i++;
			len--;
		}
		ft_putstr(av[1]);

	}
	write(1, "\n", 1);
	return (0);
}
