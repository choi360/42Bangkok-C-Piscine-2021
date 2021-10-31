/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaongma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:28:21 by jlaongma          #+#    #+#             */
/*   Updated: 2021/10/30 08:56:44 by jlaongma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (++i < power)
	{
		result = result * nb;
	}
	return (result);
}
