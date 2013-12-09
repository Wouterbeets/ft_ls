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
	ls_type		lst;
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
	else
		ft_ls_type(&lst, dir, argc, argv);
	if (lst.error == 1)
		ft_putendl("usage: asldfaskldjfh");

//	if (argv[1][0] == '-' && argv[1][1] == 'a')
//		ft_a(sd, dir);
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

void	ft_a(struct dirent *sd, DIR *dir)
{
	ft_putstr("HELLO");
	while ((sd = readdir(dir)) != NULL)
		ft_putendl(sd->d_name);
}
