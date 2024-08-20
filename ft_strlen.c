size_t ft_strlen(char *str)
{
<<<<<<< HEAD
	int len = 0;
	if (!str)
		return (len);
	while(*str)
	{
		len++;
=======
	char* start = str;
	while(*str)
	{
>>>>>>> develop
		str++;
	}
	return str - start;
}
