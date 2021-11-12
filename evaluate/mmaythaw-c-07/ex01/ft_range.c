/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaythaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:10:37 by mmaythaw          #+#    #+#             */
/*   Updated: 2021/11/08 17:54:19 by mmaythaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;

	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *)malloc(range * sizeof(int));
	while (1)
	{
		max--;
		range--;
		arr[range] = max;
		if (max == min || range == 0)
			break ;
	}
	return (arr);
}
/*#include <stdio.h>
void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
			printf(", ");
		index++;
	}
	printf(" ]");
}
int	main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);
}*/
