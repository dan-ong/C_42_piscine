#include <stdio.h>

int		ft_solve_checkleft(int arr[4][4], int row, char *clues);
int		ft_solve_checkright(int arr[4][4], int row, char *clues);
int		ft_solve_checkup(int arr[4][4], int col, char *clues);
int		ft_solve_checkdown(int arr[4][4], int col, char *clues);
void	ft_printmatrix(int arr[4][4]);

int	ft_solve_cluecheck(int arr[4][4], int row, int col, char *clues)
{
	if (col != 3 || row != 3)
		return (1);
	else if (((col == 3 && row != 3)
			&& ft_solve_checkleft(arr, row, clues) == 1)
		&& ft_solve_checkright(arr, row, clues) == 1)
		return (1);
	else if (((row == 3 && col != 3)
			&& ft_solve_checkup(arr, col, clues) == 1)
		&& ft_solve_checkdown(arr, col, clues) == 1)
		return (1);
	else if (row == 3 && col == 3)
	{
		if (((ft_solve_checkup(arr, col, clues) == 1
					&& ft_solve_checkdown(arr, row, clues) == 1)
				&& ft_solve_checkright(arr, row, clues) == 1)
			&& ft_solve_checkleft(arr, row, clues) == 1)
		{
			ft_printmatrix(arr);
			return (0);
		}
		else
			return (1);
	}
	return (0);
}

int	ft_solve_checkleft(int arr[4][4], int row, char *clues)
{
	char	checkclue;
	int		maxnum;
	int		i;
	int		check;

	i = 0;
	maxnum = 0;
	check = 48;
	while (i < 4)
	{
		if (arr[row][i] > maxnum)
		{
			maxnum = arr[row][i];
			check++;
		}
		i++;
	}
	checkclue = clues[16 + 2 * row];
	if (check == checkclue)
		return (1);
	else
		return (0);
}

int	ft_solve_checkright(int arr[4][4], int row, char *clues)
{
	char	checkclue;
	int		maxnum;
	int		i;
	int		check;

	i = 3;
	maxnum = 0;
	check = 48;
	while (i > -1)
	{
		if (arr[row][i] > maxnum)
		{
			maxnum = arr[row][i];
			check++;
		}
		i--;
	}
	checkclue = clues[24 + 2 * row];
	if (check == checkclue)
		return (1);
	else
		return (0);
}

int	ft_solve_checkdown(int arr[4][4], int col, char *clues)
{
	char	checkclue;
	int		maxnum;
	int		i;
	int		check;

	i = 0;
	maxnum = 0;
	check = 48;
	while (i < 4)
	{
		if (arr[i][col] > maxnum)
		{
			maxnum = arr[i][col];
			check++;
		}
		i++;
	}
	checkclue = clues[2 * col];
	if (check == checkclue)
		return (1);
	else
		return (0);
}

int	ft_solve_checkup(int arr[4][4], int col, char *clues)
{
	char	checkclue;
	int		maxnum;
	int		i;
	int		check;

	i = 3;
	maxnum = 0;
	check = 48;
	while (i > -1)
	{
		if (arr[i][col] > maxnum)
		{
			maxnum = arr[i][col];
			check++;
		}
		i--;
	}
	checkclue = clues[8 + 2 * col];
	if (check == checkclue)
		return (1);
	else
		return (0);
}
