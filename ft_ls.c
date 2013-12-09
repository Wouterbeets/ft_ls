/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 11:18:07 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/09 13:30:13 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		main(int argc, char **argv )
{
	DIR		*dir;
	struct dirent	*sd;

	dir = opendir(".");
	if (dir == NULL)
	{
		ft_putstr("cant open it you fool");
		exit(1);
	}
	if (argc == 1)
	{
		while ((sd = readdir(dir)) != NULL)
		{
			if (sd->d_name[0] != '.')
				ft_putendl(sd->d_name);
		}
	}
	else if (argv[1][0] == '-' && argv[1][1] == 'a')
	{
		while ((sd = readdir(dir)) != NULL)
			ft_putendl(sd->d_name);
	}
	return (1);
}
