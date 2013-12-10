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

	lst.files_to_disp = ft_lstnew(0, 0);
	dir = opendir(".");
	if (dir == NULL)
	{
		ft_putstr("cant open it you fool");
		exit(1);
	}
	if (argc == 1)
		ft_save_lsa(sd, dir, &lst);
	else
		ft_save_lsa(sd, dir, &lst);
		ft_ls_type(&lst, argc, argv);
	if (lst.error == 1)
		ft_putendl("usage: asldfaskldjfh");
	argv = 0;
	tmp = lst.files_to_disp;
	while (tmp->next != NULL)
	{
		ft_putendl((char*)tmp->content);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_save_lsa(struct dirent *sd, DIR *dir, ls_type *lst)
{
	int		count;
	int		counter;

	counter = 0;
	count = 1;
	while ((sd = readdir(dir)) != NULL)
		count++;
	closedir(dir);
	lst->filenames = ft_memalloc(count + 2);
	dir = opendir(".");
	while ((sd = readdir(dir)) != NULL)
		lst->filenames[counter++] = ft_strdup(sd->d_name);
	closedir(dir);
}
