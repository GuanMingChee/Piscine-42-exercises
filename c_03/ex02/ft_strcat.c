char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int	is;

	id = 0;
	is = 0;
	if (!dest)
		return (src);
	if (!src)
		return (dest);
	while (dest[id])
		id++;
	while (src[is])
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id + 1] = '\0';
	return (dest);
}
