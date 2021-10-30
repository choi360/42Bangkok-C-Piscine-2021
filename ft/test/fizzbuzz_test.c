/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:57:00 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/28 17:18:08 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n)
{
	if (n > 9)
	{
		ft_print_number(n / 10);
		ft_print_number(n % 10);
	}
	write(1, &"0123456789"[n], 1);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (n % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (n % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_print_number(n);
		}
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
