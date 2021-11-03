/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuksee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 00:59:06 by psuksee           #+#    #+#             */
/*   Updated: 2021/11/03 14:07:04 by psuksee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb < 2)
		return (0);
	while (check != nb)
	{
		if (nb % check == 0)
			return (0);
		if (check == 46341)
			break ;
		check++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	if (nb < 0)
		return (2);
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (nb);
}
