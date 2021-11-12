/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaythaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:22:01 by mmaythaw          #+#    #+#             */
/*   Updated: 2021/11/11 12:49:44 by mmaythaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_power(int num, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= num;
		power--;
	}
	return (result);
}

int	get_len(int num, int size, int neg)
{
	int	i;

	i = 0;
	if (neg == -1)
		i++;
	while (num > 0)
	{
		num /= size;
		i++;
	}
	return (i);
}

char	*ft_recursive(int num, char *base, char *result, int neg)
{
	int	i;
	int	size;

	i = 0;
	size = get_len(num, ft_strlen(base), neg);
	if (neg == -1)
		result[0] = '-';
	if (num == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
	}
	while (num > 0)
	{
		result[(size - i - 1)] = base[num % ft_strlen(base)];
		i ++;
		num /= ft_strlen(base);
	}
	return (result);
}

char	*ft_print(int num, char *base, int neg)
{
	char	*result;
	int		size;
	int		len;

	size = ft_strlen(base);
	len = get_len(num, size, neg);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (neg == -1 && len == 1)
	{
		result[0] = base[0];
		return (result);
	}
	return (ft_recursive(num, base, result, neg));
}
