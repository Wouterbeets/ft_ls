/*
 *
 *
 *
 *
 *
 *
 *
 */

#include "head.h"
/*
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
*/
void	ft_display(struct dirent **sd, DIR **dir) // [1] ls sans option.
{
	while ((*sd = readdir(*dir)) != NULL)
	{
	if ((*sd)->d_name[0] != '.')
		ft_putendl((*sd)->d_name);
	}
}
