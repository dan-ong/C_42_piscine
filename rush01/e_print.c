#include <unistd.h>

void	ft_printmatrix(int arr[4][4])
{
	char	temp;
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{	
			temp = arr[row][col];
			write(1, &temp, 1);
			if (col != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			col++;
		}
		row++;
		col = 0;
	}
}
