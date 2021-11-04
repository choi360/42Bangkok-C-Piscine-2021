/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:07:00 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/04 21:50:10 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[50];
	char	*src;

	sprintf(dest, "%s", "bonjour");
	src = " les amis";
	printf(".%s.\n", ft_strcat(dest, src));
	printf(".%s.\n", strcat(dest, src));
}
