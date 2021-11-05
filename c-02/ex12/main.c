void	*ft_print_memory(void *addr, unsigned int size);
void	ft_get_hex(unsigned long long nb, int prev);
void	ft_putchar(char c, int size);

int     main(void)
{
	int i;

	char str[] = "Bonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	i = 150;
	ft_print_memory(str, i);
}

//00000010a161f40
//0x7fff57f54a40
