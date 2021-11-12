/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaythaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:23:26 by mmaythaw          #+#    #+#             */
/*   Updated: 2021/11/10 17:05:25 by mmaythaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_inset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_countword(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_inset(str[i + 1], charset) && !(ft_inset(str[i], charset)))
			count++;
		i++;
	}
	return (count);
}

void	ft_addword(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!(ft_inset(src[i], charset)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_getsplit(char *str, char *charset, char **arr)
{
	int	start;
	int	word_len;
	int	word_n;

	word_n = 0;
	start = 0;
	while (str[start])
	{
		if (ft_inset(str[start], charset))
			start++;
		else
		{
			word_len = 0;
			while (!(ft_inset(str[start + word_len], charset)))
				word_len++;
			arr[word_n] = (char *)malloc(sizeof(char *) * (word_len + 1));
			ft_addword(arr[word_n], str + start, charset);
			start += word_len;
			word_n++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		word_count;

	word_count = ft_countword(str, charset);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	arr[word_count] = 0;
	ft_getsplit(str, charset, arr);
	return (arr);
}
