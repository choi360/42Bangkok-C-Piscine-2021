/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essential2_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:55:11 by psomjitr          #+#    #+#             */
/*   Updated: 2021/10/31 20:55:14 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

int	*ft_get_argv(char *str)
{
	int	i;
	int	j;
	int	*entry;

	i = 0;
	j = 0;
	entry = malloc (sizeof(int) * 16);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			entry[j] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
	return (entry);
}

int	ft_solve(int table[4][4], int entry[16], int position)
{
	int	height;

	height = 1;
	if (position == 16)
		return (1);
	while (height <= 4)
	{
		if (check_duplicate(table, position, height) == 0)
		{
			table[position / 4][position % 4] = height;
			if (check_cases(table, position, entry) == 0)
			{
				if (ft_solve(table, entry, position + 1) == 1)
					return (1);
			}
			else
				table[position / 4][position % 4] = 0;
		}
		height++;
	}
	return (0);
}

int	check_cases(int table[4][4], int position, int entry[16])
{
	if (check_col_up(table, position, entry) == 1)
		return (1);
	if (check_col_down(table, position, entry) == 1)
		return (1);
	if (check_row_left(table, position, entry) == 1)
		return (1);
	if (check_row_right(table, position, entry) == 1)
		return (1);
	return (0);
}

void	ft_display(int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(table[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
