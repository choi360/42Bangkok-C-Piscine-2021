#include "functions.h"

int	check_duplicate(int table[4][4], int position, int height)
{
	int	i;

	i = 0;
	while (i < position / 4)
	{
		if (table[i][position % 4] == height)
			return (1);
		i++;
	}
	i = 0;
	while (i < position % 4)
	{
		if (table[position / 4][i] == height)
			return (1);
		i++;
	}
	return (0);
}

int	check_col_up(int table[4][4], int position, int entry[16])
{
	int	i;
	int	max;
	int	visibility;

	i = 0;
	max = 0;
	visibility = 0;
	if (position / 4 == 3)
	{
		while (i < 4)
		{
			if (table[i][position % 4] > max)
			{
				max = table[i][position % 4];
				visibility++;
			}
			i++;
		}
		if (entry[position % 4] != visibility)
			return (1);
	}
	return (0);
}

int	check_col_down(int table[4][4], int position, int entry[16])
{
	int	i;
	int	max;
	int	visibility;

	i = 3;
	max = 0;
	visibility = 0;
	if (position / 4 == 3)
	{
		while (i >= 0)
		{
			if (table[i][position % 4] > max)
			{
				max = table[i][position % 4];
				visibility++;
			}
			i--;
		}
		if (entry[4 + position % 4] != visibility)
			return (1);
	}
	return (0);
}

int	check_row_left(int table[4][4], int position, int entry[16])
{
	int	i;
	int	max;
	int	visibility;

	i = 0;
	max = 0;
	visibility = 0;
	if (position % 4 == 3)
	{
		while (i < 4)
		{
			if (table[position / 4][i] > max)
			{
				max = table[position / 4][i];
				visibility++;
			}
			i++;
		}
		if (entry[8 + position / 4] != visibility)
			return (1);
	}
	return (0);
}

int	check_row_right(int table[4][4], int position, int entry[16])
{
	int	i;
	int	max;
	int	visibility;

	i = 3;
	max = 0;
	visibility = 0;
	if (position % 4 == 3)
	{
		while (i >= 0)
		{
			if (table[position / 4][i] > max)
			{
				max = table[position / 4][i];
				visibility++;
			}
			i--;
		}
		if (entry[12 + position / 4] != visibility)
			return (1);
	}
	return (0);
}
