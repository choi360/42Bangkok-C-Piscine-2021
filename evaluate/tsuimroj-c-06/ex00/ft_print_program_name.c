/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:59:04 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/30 23:19:50 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *string);

int	main(int argc, char *argv[])
{
	char	*program_name;

	if (argc < 1)
	{
		write(1, "impossible", 11);
	}
	else
	{
		program_name = argv[0];
		ft_putstr(program_name);
		write(1, "\n", 1);
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
