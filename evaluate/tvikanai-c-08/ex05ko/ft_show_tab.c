/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvikanai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:17:32 by tvikanai          #+#    #+#             */
/*   Updated: 2021/11/05 19:32:51 by tvikanai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	char	nr;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nr = '0' + nb % 10;
		write(1, &nr, 1);
	}
	else
	{
		nr = '0' + nb;
		write(1, &nr, 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
