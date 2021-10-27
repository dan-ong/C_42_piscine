#include "bsq.h"

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		trig;
	char	**arr;

	arr = malloc(sizeof(char *) * (ft_totalseps(str, charset) + 2));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	trig = 1;
	while (str[i])
	{
		if (ft_issep(str[i], charset))
			trig = 1;
		else if (!(ft_issep(str[i], charset)) && trig == 1)
		{
			arr[j] = ft_getstr(str, charset, i);
			trig = 0;
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}

int	ft_issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_totalseps(char *str, char *charset)
{
	int	i;
	int	sepcount;

	i = 0;
	sepcount = 0;
	while (str[i])
	{
		if (ft_issep(str[i], charset))
			sepcount++;
		i++;
	}
	return (sepcount);
}

char	*ft_getstr(char *str, char *charset, int i)
{
	char	*dst;
	int		j;
	int		len;

	j = i;
	while (str[j] && !(ft_issep(str[j], charset)))
		j++;
	len = j - i;
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		dst[j] = str[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
