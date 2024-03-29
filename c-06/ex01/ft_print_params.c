/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:58:35 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/09 20:58:47 by kmethawa         ###   ########.fr       */
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
