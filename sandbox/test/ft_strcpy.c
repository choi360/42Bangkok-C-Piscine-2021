/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 23:05:51 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/28 23:32:15 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	return (s1);
}

int	main(void)
{
	char	*c;

	*c = *ft_strcpy("test", "new");
	printf("%s", c);
}
