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
}					ls_type;

char	**ft_display(struct dirent *sd, DIR *dir);
// void	ft_a(struct dirent *sd, DIR *dir);

#endif /* HEAD_H */
