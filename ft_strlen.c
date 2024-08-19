size_t ft_strlen(char *str)
{
	int len = 0;
	if (!str)
		return (len);
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}
