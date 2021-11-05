#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[50] = "sefsfesa";
	char	src[50] = "sf";
	unsigned int	size;

	size = 0;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%lu\n", strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
	return (0);
}
