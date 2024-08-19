size_t ft_strlen(char *str)
{
	char* start = str;
	while(*str)
	{
		str++;
	}
	return str - start;
}
