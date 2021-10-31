/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:52:09 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/31 13:25:23 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (dest);
}
/*
int	main(void)
{
	char	name[10];

	ft_strcpy(name, "Kornpong");
	printf("name: %s\n", name);
	return (0);
}
*/
