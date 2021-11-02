/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_test4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:54:36 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/27 20:57:22 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	draw_lines(int len, int i)
{
	while (i++ < len && puts("Looping"))
		puts("-----");
}

int	main(void)
{
	draw_lines(5, 0);
	return (0);
}