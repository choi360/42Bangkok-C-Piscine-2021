/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaythaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:45:34 by mmaythaw          #+#    #+#             */
/*   Updated: 2021/11/08 17:55:29 by mmaythaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_joinlen(int size, char **strs, char *sep)
{
	int	joinlen;
	int	index;
	int	seplen;

	seplen = ft_strlen(sep);
	joinlen = 0;
	index = 0;
	while (index < size)
	{
		joinlen += ft_strlen(strs[index]);
		joinlen += seplen;
		index++;
	}
	joinlen -= seplen;
	return (joinlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joinstr;
	char	*move_pt;
	int		joinlen;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	joinlen = ft_joinlen(size, strs, sep) + 1;
	joinstr = (char *)malloc(joinlen * sizeof(char));
	if (joinstr == NULL)
		return (0);
	move_pt = joinstr;
	joinlen = 0;
	while (joinlen < size)
	{
		ft_strcpy(move_pt, strs[joinlen]);
		move_pt += ft_strlen(strs[joinlen]);
		if (joinlen < size - 1)
		{
			ft_strcpy(move_pt, sep);
			move_pt += ft_strlen(sep);
		}
		joinlen++;
	}
	*move_pt = '\0';
	return (joinstr);
}
/*#include <stdio.h>
int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "My";
	strs[1] = "brain";
	strs[2] = "hurts";
	strs[3] = "so bad";
	separator = "-/\\-";
	index = 0;
	while (index < 4) // change num to size(of strs included null) that you want
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}*/
