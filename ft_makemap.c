
char	*ft_makemap(int size)
{
	int	i;
	int	count;
	int	len;
	char	*str;

	i = 0;
	count = 0;
	len = size * (size + 1) + 1;
	if (!(str = (char*)ft_memalloc(sizeof(*str) * len))
		return (NULL);
	while (i < len)
	{
		while (count < size)
			str[i++] = '.';
		str[i++] = '\n';
		count = 0;
	}
	str[i] = '\0';
	return (str);
}
