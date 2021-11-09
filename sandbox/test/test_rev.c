#include <stdio.h>

char	*ft_rev_print(const char *str)
{
	const char *p = str;

	while (*p)
		++p;
	while (p != str)
		putchar(*--p);
	return (char *)str;
}

int	main(void)
{
	ft_rev_print("test");
	putchar('\n');
	return (0);
}
