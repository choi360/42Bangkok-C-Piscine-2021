/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:11:59 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/31 16:18:05 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && n-- > 0)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	name[10];

	ft_strncpy(name, "Kornpong", 4);
	printf("name: %s\n", name);
	return (0);
}
*/
