#include <stdio.h>

char	*ft_rev_print(char *str)
{
	char *p = str;

	while (*p)
		++p;
	while (p != str)
		putchar(*--p);
	return (str);
}

int	main(void)
{
	ft_rev_print("xxxx");
	putchar('\n');
	return (0);
}
