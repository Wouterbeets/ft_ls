/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 15:22:21 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/11 17:24:32 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "head.h"

int		main(int argc, char **argv )
{
	DIR	*dir;
	struct dirent	*sd;
	struct stat	st;
	struct stat	*statstr;
	int		ret;
	t_list	*lst;
	t_list	*begin;
	int	i;

	i = 0;
	ret = 1;
	begin = ft_lstnew(0, 0);
	while (++i < argc)
	{
		ret = lstat(argv[i], &st);
		if (ret == 0)
		{
			ft_putendl("ret = 0");
			lst = ft_lstnew(&st, sizeof(st));
			ft_lstadd(&begin, lst);
		}
		else
		{
			ft_putendl("ret = ");
			ft_putnbr(ret);
			ft_putendl("");
		}
	}
	lst = begin;
	while (lst->next != NULL)
	{
		st = *(struct stat*)lst->content;
		ft_putnbr(st.st_size);
		lst = lst->next;
	}
	return (0);
}

