#include "bsq.h"

//The filehandling functions cycle through each file
//File is opened, read is used to get file size as integer, then file closed
//File data is read up to the file size and saved in malloc'd char array,
//then sent to the validation process.
//If the validation process is passed, the file data is
//sent to the solve process.
//If filedata is not null, the filedata memory is freed.

int	ft_filehandling(char **files, int filecount)
{
	int		filesize;
	char	*filedata;
	int		i;

	i = 0;
	while (i < filecount)
	{
		ft_printfilename(files[i]);
		filesize = ft_getfilesize(files[i]);
		if (filesize > 0)
		{
			filedata = ft_getfiledata(files[i], filesize);
			if (filedata != NULL && ft_allgood(filedata))
			{
				ft_solveprocess(filedata, filesize);
			}
			if (filedata != NULL)
				free(filedata);
		}
		i++;
	}
	return (0);
}

int	ft_getfilesize(char *filename)
{
	int		filenum;
	int		counter;
	char	temp;

	filenum = open(filename, O_RDONLY);
	if (filenum == -1)
	{
		ft_putstr("map error\n");
		return (0);
	}
	counter = 0;
	while (read(filenum, &temp, 1))
		counter++;
	if (close(filenum) == -1)
	{
		ft_putstr("map error");
		return (0);
	}	
	if (counter < 7)
	{
		ft_putstr("map error\n");
		return (0);
	}
	else
		return (counter);
}

int	ft_filecount(char **files)
{
	int	count;

	count = 0;
	while (files[count])
		count++;
	return (count);
}

char	*ft_getfiledata(char *filename, int filesize)
{
	char	*filedata;
	int		filenum;
	int		readnum;

	filedata = malloc(sizeof(char) * (filesize + 1));
	if (filedata == NULL)
	{
		ft_putstr("malloc error");
		return (0);
	}
	filenum = open(filename, O_RDONLY);
	if (filenum == -1)
	{
		ft_putstr("map error");
		return (0);
	}
	readnum = read(filenum, filedata, filesize);
	filedata[readnum] = '\0';
	return (filedata);
}
