unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	r;
	int	s;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	s = j + i;
	if (size <= i)
		return (size + j);
	r = size - 1 - i;
	j = 0;
	while (r != 0 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		r--;
	}
	dest[i] = '\0';
	return (s);
}
