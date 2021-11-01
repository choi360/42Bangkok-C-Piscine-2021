/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:55:30 by psomjitr          #+#    #+#             */
/*   Updated: 2021/10/31 20:55:32 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int	main(int argc, char **argv)
{
	int	table[4][4];
	int	*surrounding_numbers;
	int	position;

	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 31)
		return (0);
	surrounding_numbers = ft_get_argv(argv[1]);
	position = 0;
	if (ft_solve(table, surrounding_numbers, position) == 1)
		ft_display(table);
	else
		ft_putstr("Error\n");
	return (0);
}
