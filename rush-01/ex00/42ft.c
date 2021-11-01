/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42ft.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:54:54 by psomjitr          #+#    #+#             */
/*   Updated: 2021/10/31 20:55:04 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	ft_strlen(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
		temp++;
	return (temp - str);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nb;

	nb = 0;
	i = 0;
	negative = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		       	 || str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * negative);
}
