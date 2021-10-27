#include "bsq.h"

t_solve	*ft_struct_gen(t_master m)
{
	t_solve	*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(t_solve) * (m.len));
	if (arr == NULL)
		return (NULL);
	while (i < m.len)
	{
		if (m.map[i] == m.key[0])
			arr[i].state = 0;
		else
			arr[i].state = 1;
		arr[i].max = ft_find_max(m, arr, i);
		i++;
	}
	return (arr);
}

int	ft_find_max(t_master m, t_solve *arr, int i)
{
	if (arr[i].state == 1)
		return (0);
	else if (((i / m.cols) == 0) || ((i % m.cols) == 0))
		return (1);
	else
	{
		if ((arr[i - 1].max < arr[i - m.cols].max)
			&& (arr[i - 1].max < arr[i - m.cols - 1].max))
			return (arr[i - 1].max + 1);
		else if (arr[(i - m.cols)].max < arr[i - m.cols - 1].max)
			return (arr[i - m.cols].max + 1);
		else
			return (arr[i - m.cols - 1].max + 1);
	}
}
