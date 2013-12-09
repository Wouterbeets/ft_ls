/* How you doin cowboy?
 *
 *
 *
 *
 *
 *
 */

void	ft_ls_type(*ls_type lst, DIR *dir, int argc, char **argv)
{
	int		i;

	i = 1;
	j = 0;
	while ( ++i <= argc)
	{
		if (argv[i][0] ==  '-')
		{
			if (ft_ls-what(argv[i], lst) == NULL)
				return;
		}
		else
			if(ft_ls_filename(argv[i]) == NULL)
				return;
		i++;
	}
}


int		ft_ls-what(char *str, ls_type *lst)
{
	int		i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 'l')
			*lst->l = 1;
		else if (str[i] == 'r')
			*lst->r = 1;
		else if (str[i] == 'R')
			*lst->R = 1;
		else if (str[i] == 'a')
			*lst->a = 1;
		else if (str[i] == 't')
			*lst->t = 1;
		else
		{
			*lst->error = 1;
			return (NULL);
		}
		i++
	}
	return (1);
}

int		ft_ls_filename(char *str, DIR *dir)
{
	*dir = *dir;
	*str = *str;
	return (1);
}
