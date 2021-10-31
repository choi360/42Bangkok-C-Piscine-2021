/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:15:13 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/28 18:17:59 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *string);

int	main(int argc, char *argv[])
{
	int	index;

	if (argc == 0)
	{
		write(1, "impossible", 11);
	}
	else
	{
		index = 1;
		while (index < argc)
		{
			ft_putstr(argv[index]);
			write(1, "\n", 1);
			index++;
		}
	}
	return (0);
}

void	ft_putstr(char *string)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
	{
		write(1, string + index, 1);
		index++;
	}
}
