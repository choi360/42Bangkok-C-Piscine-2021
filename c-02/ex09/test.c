/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 00:40:40 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/01 13:36:06 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			j++;
		}
		else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 'a' - 'A';
		else if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[90];

	sprintf(str, "%s", "salut, cent tu vas ? 42mots quae-deux; cinnte+et+un");
	printf("str = %s\n", str);
	sprintf(str, "%s", ft_strcapitalize(str));
	printf("str = %s\n", str);
	return (0);
}
