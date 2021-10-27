#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_lenny(int size, char **strs);
char	*ft_strcat(char *dst, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*desto;
	int		i;

	i = ft_lenny(size, strs) + (size - 1) * ft_strlen(sep) + 1;
	if (i < 1)
		i = 1;
	desto = malloc(sizeof(char) * i);
	if (desto == NULL)
		return (NULL);
	if (size == 0)
		return (desto);
	i = 0;
	desto[0] = '\0';
	while (i < size)
	{
		ft_strcat(desto, strs[i]);
		if (i != size - 1)
			ft_strcat(desto, sep);
		i++;
	}
	return (desto);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_lenny(int size, char **strs)
{
	int	lenno;
	int	counto;

	counto = 0;
	lenno = 0;
	while (counto < size)
	{
		lenno += ft_strlen(strs[counto]);
		counto++;
	}
	return (lenno);
}

char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
