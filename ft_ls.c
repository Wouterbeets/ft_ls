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
	t_list		*tmp;
	name_stat	*namestat;
	name_dir	*namedir;

	lst.arg_files = ft_lstnew(0, 0);
	lst.arg_dir = ft_lstnew(0, 0);
	if (argc == 1)
		argv = 0;
//		ft_display(&sd, &dir);
	else
		ft_ls_type(&lst, argc, argv);
	if (lst.arg_dir->content == NULL && lst.arg_files->content == NULL)
		readdirectory(&lst, ".");
	tmp = lst.arg_dir;
	while (tmp->next != NULL)
	{
		namedir = (name_dir*)tmp->content;
		ft_putendl(namedir->name);
		tmp = tmp->next;
	}
	tmp = lst.arg_files;
	while (tmp->next != NULL)
	{
		namestat = (name_stat*)tmp->content;
		ft_putendl(namestat->name);
		tmp = tmp->next;
	}
	return (1);
}

void	readdirectory(ls_type *lst, char *str)
{
	DIR	*dir;
	struct dirent	*sd;

	if((dir = opendir(str)) == NULL)
		ft_putstr("error");
	while ((sd = readdir(dir)) != 0)
	{
		if (lst->a != 1) 
		{
			if (sd->d_name[0] != '.')
				checkfile(sd->d_name, lst);
		}
		else
			checkfile(sd->d_name, lst);
	}
}
