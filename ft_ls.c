/*  INCLUDE HEADER BEFORE GITPUSH TO VOGOSPHERE!!!!
 *
 *
 *
 *
 *
 *
 */


#include "head.h"


int		main(int argc, char **argv )
{
//	ls_type		lst;
	DIR			*dir;
	struct dirent	*sd;
	dir = opendir(".");
	if (dir == NULL)
	{
		ft_putstr("cant open it you fool");
		exit(1);
	}
	if (argc == 1)
		ft_display(sd, dir);
	if (argv[1][0] == '-' && argv[1][1] == 'a')
		ft_putstr("HELLO");
	closedir(dir);
	return (1);
}

void	ft_display(struct dirent *sd, DIR *dir)
{
	while ((sd = readdir(dir)) != NULL)
	{
		if (sd->d_name[0] != '.')
		ft_putendl(sd->d_name);
	}
}
/* the part that does ls -a
 * void	ft_a(dirent *sd, char **argv)
{
if (argv[1][0] == '-' && argv[1][1] == 'a')
	while ((sd = readdir(dir)) != NULL)
			ft_putendl(sd->d_name);
}

	*/

// else
// 		ft_ls_type(&lst, argc, **argv);
