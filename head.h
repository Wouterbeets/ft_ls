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
# include <sys/types.h>

typedef struct		lstype
{
	int		a;
	int		l;
	int		r;
	int		R;
	int		t;
	char	**filenames;
	int		error;
	t_list	*files_to_disp;
}				ls_type;

void	ft_ls_type(ls_type *lst, int argc, char **argv);
int		ft_ls_what(char *str, ls_type *lst);
void	ft_save_lsa(struct dirent *sd, DIR *dir, ls_type *lst);
// void	ft_a(struct dirent *sd, DIR *dir);
int		ft_ls_filename(char *str, ls_type *lst);

#endif /* HEAD_H */
