/* AAAAAAAH DONT FORGET THE HEADER!!!!!!!
 * HELLOOOOOOOOo
 *
 *
 *
 *
 *
 */
#ifndef HEAD_H
# define HEAD_H
# define ERRORFILE = "blabla is not a file"
# include "libft.h"
# include <dirent.h>
# include <stdlib.h>
# include <sys/stat.h>

typedef struct		lstype
{
	int		a;
	int		l;
	int		r;
	int		R;
	int		t;
	int		error;
	t_list	*arg_files;
	t_list	*arg_dir;
}				ls_type;

typedef struct		namedir
{
	char	*name;
	DIR		*dir;
}					name_dir;

typedef struct		namestat
{
	char	*name;
	struct stat	st;
}					name_stat;

void	ft_display(struct dirent **sd, DIR **dir);
void	ft_ls_type(ls_type *lst, int argc, char **argv);
int		ft_ls_what(char *str, ls_type *lst);
void	ft_save_lsa(struct dirent *sd, DIR *dir, ls_type *lst);
int		ft_ls_filename(char *str, ls_type *lst);
int		checkfile(char *str, ls_type *lst);
void	readdirectory(ls_type *lst, char *str);

#endif /* HEAD_H */
