#include <unistd.h>

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	int count;

	i = '0';
	j = '1';
	k = '2';
	count = '0';

	while (i < '8')
	{
		while (j < '9')
		{
			while (k < ('9' +1))
			{
				count++;
				if (count > '1')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				k++;
			}
			k = ++j + 1;
		}
		j = ++i;		
	}
}
