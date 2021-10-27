#include <unistd.h>

void	ft_printmatrix(int arr[4][4]);
void	ft_putstr(char *str);
int		ft_solve_possible(int arr[4][4], int row, int col, char n);
int		ft_solve_cluecheck(int arr[4][4], int row, int col, char *clues);

void	ft_solve_backtrack(int arr[4][4], char *clues)
{
	int	pos;
	int	n;

	pos = 0;
	n = 49;
	while (pos < 16)
	{
		if (arr[pos / 4][pos % 4] == '0')
		{
			while (n <= 52)
			{
				if (ft_solve_possible(arr, pos / 4, pos % 4, n) == 1)
				{
					arr[pos / 4][pos % 4] = n;
					if (ft_solve_cluecheck(arr, pos / 4, pos % 4, clues) == 1)
						ft_solve_backtrack(arr, clues);
					arr[pos / 4][pos % 4] = '0';
				}
				n++;
			}
		}
		pos++;
	}
}

int	ft_solve_possible(int arr[4][4], int row, int col, char n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (arr[row][i] == n)
			return (0);
		else if (arr[i][col] == n)
			return (0);
		else
			i++;
	}
	return (1);
}
