/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_test3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:45:23 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/27 20:52:01 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	draw_lines(int len)
{
	while (len-- > 0 && puts("Looping"))
		puts("-----");
}

int	main(void)
{
	draw_lines(5);
	return (0);
}
