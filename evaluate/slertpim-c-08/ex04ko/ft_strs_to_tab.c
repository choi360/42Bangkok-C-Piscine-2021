/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:19:38 by slertpim          #+#    #+#             */
/*   Updated: 2021/11/10 22:49:32 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcopy(char *str, int len)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (0);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					len;
	struct s_stock_str	*array;

	i = 0;
	ac = ac + 0;
	array = (char *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	while (av[i])
	{
		len = 0;
		while (av[i][len])
			len++;
		array[i].size = len;
		array[i].str = av[i];
		array[i].copy = ft_strcopy(av[i], len);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}
