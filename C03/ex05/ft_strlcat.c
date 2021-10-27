unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;

	i = 0;
	j = 0;
	srclen = 0;
	while (dest[i] != '\0')
		i++;
	while (src[srclen] != '\0')
		srclen++;
	srclen = srclen + i;
	while (src[j] != '\0' && j < (size - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (size > 0)
		dest[i + j] = '\0';
	return (srclen);
}
