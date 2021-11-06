/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:02:39 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/06 21:09:17 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_strlen("Hello World.");
	printf("i = %d\n", i);
	return (0);
}*/
