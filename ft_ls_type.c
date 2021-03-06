/* How you doin cowboy?
 *
 *
 *
 *
 *
 *
 */

#include "head.h"

void	ft_ls_type(ls_type *lst, int argc, char **argv)
{
	int		i;

	i = 0;
	while ( ++i < argc)
	{
		if (argv[i][0] == '-')
		{
			if (ft_ls_what(argv[i], lst) == 0)
				return;
		}
		else
			checkfile(argv[i], lst);
	}
}


int		ft_ls_what(char *str, ls_type *lst)
{
	int		i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 'l')
			lst->l = 1;
		else if (str[i] == 'r')
			lst->r = 1;
		else if (str[i] == 'R')
			lst->R = 1;
		else if (str[i] == 'a')
			lst->a = 1;
		else if (str[i] == 't')
			lst->t = 1;
		else
		{
			lst->error = 1;
			return (0);
		}
		i++;
	}
	return (1);
}


int		checkfile(char *str, ls_type *lst)
{
	int				ret;
	t_list			*tmp;

	if ((ret = stat(str, &lst->st)) == 0)
	{
		lst->namestat.name = str;
		lst->namestat.st = lst->st;
		tmp = ft_lstnew(&lst->namestat, sizeof(lst->namestat));
		if (S_ISDIR(lst->namestat.st.st_mode))
			ft_lstadd(&lst->arg_dir, tmp);
		else
			ft_lstadd(&lst->arg_files, tmp);
	}
	else
		ft_putendl("error not a file");
	return (1);
}



/*
int		ft_ls_filename(char *str, ls_type *lst)
{
	int		i;
	int		ret;
	t_list	*tmp;

	i = -1;
	ret = 1;
	while (lst->filenames[++i] != '\0' && ret != 0)
	{
		if (!(ret = ft_strcmp(str, lst->filenames[i])))
		{
			tmp = ft_lstnew(str, sizeof(str));
			ft_lstadd(&lst->files_to_disp, tmp);
		}
	}
	if (ret != 0)
		ft_putendl("this is bullshit");
	return (1);
}*/
