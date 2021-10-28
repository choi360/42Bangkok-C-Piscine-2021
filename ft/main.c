/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:29:13 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/28 01:42:12 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int n);
int	ft_strlen(char *str);

int	main(void)
{
	int	i;

	ft_putstr("Hello World.\n");
	i = ft_strlen("Hello World.");
	ft_putnbr(i);
	return (0);
}
