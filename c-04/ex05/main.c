/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:42:58 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/08 16:57:53 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*str;
	char	*base;

	str = "           \n     ----+--+1a4yab4wp";
	base = "a      b";
	printf("%d\n", ft_atoi_base(str, "0123456789abcdef"));
}
