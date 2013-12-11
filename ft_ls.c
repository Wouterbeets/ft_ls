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
	t_list		*tmp;
	name_stat	*namestat;
	name_dir	*namedir;

	lst.arg_files = ft_lstnew(0, 0);
	lst.arg_dir = ft_lstnew(0, 0);
	if (argc == 1)
		ft_display(&sd, &dir);
	else
		ft_ls_type(&lst, argc, argv);
	tmp = lst.arg_dir;
	namestat = namestat;
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
		ft_putnbr(namestat->st.st_size);
		tmp = tmp->next;
	}
	return (1);
}
