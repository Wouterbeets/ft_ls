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
	argv = 0;
//	if (argv[1][0] == '-' && argv[1][1] == 'a')
//		ft_a(sd, dir);
	closedir(dir);
	return (1);
}

char	**ft_display(struct dirent *sd, DIR *dir)
{
	char	**tab;
	int		count;
	int		counter;

	counter = 0;
	count = 1;
	while ((sd = readdir(dir)) != NULL)
	{
		if (sd->d_name[0] != '.')
		{
			ft_putendl(sd->d_name);
			count++;
		}	
	}
	closedir(dir);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	dir = opendir(".");
	while ((sd = readdir(dir)) != NULL)
	{
		if (sd->d_name[0] != '.')
			tab[counter++] = ft_strdup(sd->d_name);
	}
	return (tab);
}

// void	ft_a(struct dirent *sd, DIR *dir)
// {
// 	ft_putstr("HELLO");
// 	while ((sd = readdir(dir)) != NULL)
// 		ft_putendl(sd->d_name);
// }