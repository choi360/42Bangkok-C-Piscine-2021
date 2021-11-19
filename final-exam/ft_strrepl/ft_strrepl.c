char	*ft_strrepl(char *str, char c1, char c2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c1)
			str[i] = c2;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "abcde";
	char	c1 = 'c';
	char	c2 = 'z';

	ft_strrepl(str, c1, c2);
	return (0);
}*/
