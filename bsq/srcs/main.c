#include "bsq.h"

//The main file gets user inputs from either argurments
//or form standard input (ft_getuserinput).
//An array of file strings and the number of files is passed
//to the ft_filehandling function.

int	main(int argc, char **argv)
{
	char	**files;
	int		filecount;

	if (argc == 1)
	{
		files = ft_getuserinput();
		if (files == NULL)
			return (0);
		filecount = ft_filecount(files);
	}
	else
	{
		files = &argv[1];
		filecount = argc - 1;
	}
	ft_filehandling(files, filecount);
	return (0);
}

char	**ft_getuserinput(void)
{
	char	**files;
	char	*input;
	int		i;
	int		readsize;

	i = 0;
	input = malloc(sizeof(char) * 4096);
	if (input == NULL)
		return (0);
	ft_putstr("Input filenames separated by SPACES ONLY\n");
	readsize = read(0, input, 4095);
	input[readsize] = '\0';
	if (ft_check_whitespace(input) == 0)
		return (0);
	files = ft_split(input, " \n");
	free (input);
	return (files);
}

int	ft_check_whitespace(char *input)
{
	int	i;
	int	maxchar;

	i = 0;
	maxchar = 0;
	while (input[i])
	{
		if (input[i] > maxchar)
			maxchar = input[i];
		i++;
	}
	if (maxchar < 33 || maxchar == 127)
	{
		ft_putstr("Good try... Enter a valid filename nerd.\n");
		return (0);
	}
	return (1);
}
