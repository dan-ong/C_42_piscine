#include <stdio.h>

void	ft_clues_checker(char *clues, int arr[4][4]);
void	ft_clues_checker2(char *clues, int arr[4][4], int i);
void	ft_clues_filldown_right(int arr[4][4], int index, int clue, char c);
void	ft_clues_fillup_left(int arr[4][4], int index, int clue, char c);
void	ft_printmatrix(int arr[4][4]);
void	ft_solve_backtrack(int arr[4][4], char *clues);

void	ft_getclues(char *clues)
{
	int	arr[4][4];
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			arr[row][col] = '0';
			col++;
		}
		row++;
		col = 0;
	}
	ft_clues_checker(clues, arr);
	ft_solve_backtrack(arr, clues);
}

void	ft_clues_checker(char *clues, int arr[4][4])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (i % 2 == 0)
		{
			ft_clues_filldown_right(arr, i / 2, clues[i], 'c');
		}
		i++;
	}
	while (i >= 8 && i < 16)
	{
		if (i % 2 == 0)
		{
			ft_clues_fillup_left(arr, i / 2 - 4, clues[i], 'c');
		}
		i++;
	}
	ft_clues_checker2(clues, arr, i);
}

void	ft_clues_checker2(char *clues, int arr[4][4], int i)
{
	while (i >= 16 && i < 24)
	{
		if (i % 2 == 0)
			ft_clues_filldown_right(arr, i / 2 - 8, clues[i], 'r');
		i++;
	}
	while (i >= 24 && i < 32)
	{
		if (i % 2 == 0)
			ft_clues_fillup_left(arr, i / 2 - 12, clues[i], 'r');
		i++;
	}
}

void	ft_clues_filldown_right(int arr[4][4], int index, int clue, char c)
{
	int	count;

	count = 0;
	if (clue == '4' && c == 'c')
	{
		while (count < 4)
		{
			arr[count][index] = '0' + count + 1;
			count++;
		}
	}
	else if (clue == '1' && c == 'c')
		arr[0][index] = '4';
	else if (clue == '4' && c == 'r')
	{
		while (count < 4)
		{
			arr[index][count] = '0' + count + 1;
			count++;
		}
	}
	else if (clue == '1' && c == 'r')
		arr[index][0] = '4';
}

void	ft_clues_fillup_left(int arr[4][4], int index, int clue, char c)
{
	int	count;
	int	i;

	count = 4;
	i = -1;
	if (clue == '4' && c == 'c')
	{
		while (count-- >= 0)
		{
			arr[count][index] = '0' + i + 1;
			i++;
		}
	}
	else if (clue == '1' && c == 'c')
		arr[3][index] = '4';
	else if (clue == '4' && c == 'r')
	{
		while (count-- >= 0)
		{
			arr[index][count] = '0' + i + 1;
			i++;
		}
	}
	else if (clue == '1' && c == 'r')
		arr[index][3] = '4';
}
