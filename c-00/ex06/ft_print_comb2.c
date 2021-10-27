/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:20:42 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/26 22:55:24 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_to_99(char *num)
{
	if (num[1] != '9')
	{
		num[4] = num[1] + 1;
		num[3] = num[0];
	}
	else
	{
		num[3] = num[0] + 1;
		num[4] = '0';
	}
	while (num[3] <= '9')
	{
		while (num[4] <= '9')
		{
			ft_putstr(num);
			if (num[0] == '9' && num[1] == '8' &&
					num[3] == '9' && num[4] == '9')
				return ;
			ft_putstr(", ");
			num[4]++;
		}
		num[4] = '0';
		num[3]++;
	}
}

void	ft_print_comb2(void)
{
	char	num[6];

	num[0] = '0';
	num[1] = '0';
	num[2] = ' ';
	num[3] = '0';
	num[4] = '0';
	num[4] = '\0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			ft_to_99(num);
			if (num[0] == '9' && num[1] == '8')
				return ;
			num[1]++;
		}
		num[0]++;
	}
}
