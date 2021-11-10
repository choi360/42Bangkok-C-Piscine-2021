/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_fixed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:06:51 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/11/09 21:11:50 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char check, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == check)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	length;

	length = 0;
	while (*(str + length) != '\0' && !is_in_charset(*(str + length), charset))
	{
		length++;
	}
	return (length);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (str && is_in_charset(*str, charset))
		{
			str++;
		}
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
		{
			j++;
		}
	}
	return (j);
}

char	*ft_copy(char *src, int length)
{
	char	*dest;
	int		i;

	dest = (char *)malloc((length + 1) * sizeof(char));
	if (!dest)
	{
		return (0);
	}
	i = 0;
	while (src[i] && i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		count_word;
	int		i;
	int		j;
	int		k;
	char	**word_arr;

	count_word = ft_wordcount(str, charset);
	word_arr = malloc((count_word + 1) * sizeof(char *));
	if (!word_arr)
		return (0);
	i = 0;
	j = 0;
	while (i < count_word)
	{
		while (is_in_charset(str[j], charset))
			j++;
		k = ft_wordlen(str + j, charset);
		word_arr[i] = ft_copy(str + j, k);
		i += 1;
		j += k;
	}
	word_arr[count_word] = 0;
	return (word_arr);
}
