/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssurabut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 00:21:27 by ssurabut          #+#    #+#             */
/*   Updated: 2021/10/31 00:21:30 by ssurabut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0' && nb > 0)
	{
		*d = *(unsigned char *)src;
		d++;
		src++;
		nb--;
	}
	*d = '\0';
	return (dest);
}
