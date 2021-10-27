#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_solve
{
	int	state;
	int	max;
}	t_solve;

typedef struct s_master
{
	int		len;
	int		cols;
	char	*key;
	char	*map;
	t_solve	*lmax;
}	t_master;

//ft_square_gen.c
void	ft_final_out_print(t_master m);
int		ft_find_first_max(t_master m);

//ft_struct_gen.c
t_solve	*ft_struct_gen(t_master m);
int		ft_find_max(t_master m, t_solve *arr, int i);

//ft_print.c
void	ft_print_map(t_master m);
void	ft_print_state(t_master m);
void	ft_print_max(t_master m);
void	ft_printfilename(char *filename);

//ft_put.c
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

//ft_split.c
char	**ft_split(char *str, char *charset);
int		ft_issep(char c, char *charset);
int		ft_totalseps(char *str, char *charset);
char	*ft_getstr(char *str, char *charset, int i);

//ft_filehandling.c
int		ft_filehandling(char **files, int filecount);
int		ft_getfilesize(char *filename);
int		ft_filecount(char **files);
char	*ft_getfiledata(char *filename, int filesize);

//ft_datacleanup.c
char	*ft_getkeys(char *filedata);
char	*ft_clean(t_master m, char *filedata, int readnum);
int		ft_iskey(char c, char *key);
int		ft_getcols(char *filedata);

//ft_solveprocess.c
int		ft_solveprocess(char *filedata, int filesize);

//ft_main.c
char	**ft_getuserinput(void);
int		ft_check_whitespace(char *input);

//ft_filevalidation.c
int		ft_check_head(char *filedata);
int		ft_atoi(char *filedata);
int		ft_check_keys(char *filedata, char *keys);
int		ft_check_newlines(char *filedata);

//ft_allgood.c
int		ft_allgood(char *filedata);
int		ft_check_equallines(char *filedata);
int		ft_line_length(char *filedata);
int		ft_check_emptychar(char *filedata);
int		ft_count_newlines(char *filedata);

#endif
