/* AAAAAAAH DONT GFORGET THE HEADER!!!!!!!
 * HELLOOOOOOOOo
 *
 *
 *
 *
 *
 */
#ifndef HEAD_H
# define HEAD_H

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
}					ls_type;

void	ft_ls_type(ls_type *lst, DIR *dir, int argc, char **argv);
int		ft_ls_what(char *str, ls_type *lst);
char	**ft_display(struct dirent *sd, DIR *dir);
// void	ft_a(struct dirent *sd, DIR *dir);
int		ft_ls_filename(char *str, DIR *dir);
void	ft_display(struct dirent *sd, DIR *dir);
#endif /* HEAD_H */
