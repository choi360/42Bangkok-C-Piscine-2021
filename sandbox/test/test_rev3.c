#include <unistd.h>

char	*rev_print(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (len > 0)
	{
		write(1, &str[len - 1], 1);
		len--;
	}
	return (str);
}

int	main(void)
{
	rev_print("test");
	write(1, "\n", 1);
	return (0);
}
