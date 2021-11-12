/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaythaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:23 by mmaythaw          #+#    #+#             */
/*   Updated: 2021/11/11 12:50:49 by mmaythaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_print(int nbr, char *base, int neg);
int		ft_strlen(char *str);
int		ft_power(int num, int power);

int	ft_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\v' || c == '\f');
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '+'
				|| base[j] == '-' || ft_space(base[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	*checksign(char *str, int *neg)
{
	*neg = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*neg *= -1;
		str++;
	}
	return (str);
}

char	*ft_atoi(char *str, char *base, int *neg, int *size)
{
	int	i;
	int	j;
	int	valid;

	i = 0;
	while (ft_space(*str))
		str++;
	str = checksign(str, neg);
	while (*str != '\0')
	{
		j = -1;
		valid = 0;
		while (base[++j] != '\0')
			if (*str == base[j])
				valid = 1;
		if (valid == 0)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;
	int	neg;
	int	size;
	int	ps;
	int	i;

	num = 0;
	ps = 0;
	nbr = ft_atoi(nbr, base_from, &neg, &size);
	if (checkbase(base_from) || checkbase(base_to))
		return (NULL);
	while (ps < size)
	{
		i = 0;
		while (base_from[i] != nbr[ps])
			i++;
		num += i * ft_power(ft_strlen(base_from), (size - ps - 1));
		ps++;
	}
	return (ft_print(num, base_to, neg));
}
