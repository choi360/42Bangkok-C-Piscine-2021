/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:31:29 by vchancha          #+#    #+#             */
/*   Updated: 2021/11/05 14:34:19 by vchancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	index;

	if (nb < 0)
		return (0);
	index = 1;
	factorial = 1;
	while (index < nb + 1)
		factorial = factorial * index++;
	return (factorial);
}
