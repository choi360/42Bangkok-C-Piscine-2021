/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:33:03 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/25 21:22:59 by kmethawa         ###   ########.fr       */
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

int	is_end(char *num, char *end, int n)
{
	int	i;

	i = n;
	while (--i >= 0)
		if (num[i] != end[i])
			return (0);
	return (1);
}

void	ft_increase(char (*num)[10], char *regis, int n)
{
	char	max;
	int	i;

	i = n;
	max = '9';
	while (--i >= 0)
	{
		if ((i == n - 1 || regis[i + 1] == '2') && !((*num)[i] == max))
			regis[i] = '1';
		else if ((*num)[i] == max)
			regis[i] = '2';
		max--;
	}
	while (++i < n)
	{
		if (regis[i] == '1')
			(*num)[i]++;
		else if (regis[i] == '2' && i != 0)
			(*num)[i] = (*num)[i - 1] + 1;
		regis[i] = '0';
	}
}

void	ft_print_combn(int n)
{
	int	i;
	char	num[10];
	char	regis[10];
	char	status_end[10];

	if (n < 1 || n > 9)
		return ;
	i = -1;
	{
		num[i] = i + '0';
		status_end[i] = 10 - (n - 1) + '0';
		regis[i] = '0';
	}
	num[i] = '\0';
	status_end[i] = '\0';
	regis[i] = '\0';
	while (!is_end(num, status_end, n) && (i = -1))
	{
		ft_putstr(num);
		ft_putstr(", ");
		ft_increase(&num, regis, n);
	}
	ft_putstr(num);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
