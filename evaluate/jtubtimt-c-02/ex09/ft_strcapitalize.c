/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtubtimt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:49:00 by jtubtimt          #+#    #+#             */
/*   Updated: 2021/11/04 09:39:10 by jtubtimt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	big;

	i = 0;
	big = 1;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z'))
		{
			big = 1;
		}
		else
		{
			if (big > 0)
			{
				if ('a' <= str[i] && str[i] <= 'z')
				{
					str[i] -= 'a' - 'A';
					big = 0;
				}
			}
		}
		i++;
	}
	return (str);
}
}
