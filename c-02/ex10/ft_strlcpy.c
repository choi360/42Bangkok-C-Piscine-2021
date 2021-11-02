/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 00:10:11 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/02 13:04:58 by kmethawa         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		dst_len;
	int		src_len;
	int		byte_left;
	unsigned int	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	bytes_left = (int)size - 1;
	if (bytes_left >= 0)
	{
		i = 0;
		while (bytes_left-- & src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (str_len);
	}
	return (src_len + size);
}

int	main(void)
{
	int	i;

	i = ft_strlcpy("Hello", "World", 4);

