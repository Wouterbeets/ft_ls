/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 11:18:07 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/06 13:29:56 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		main(int argc, char **argv )
{
	DIR		*dir;
	struct dirent	*sd;

	argc = 0;
	argv = 0;
	dir = opendir(".");
	if (dir == NULL)
	{
		ft_putstr("cant open it you fool");
		exit(1);
	}
	while ((sd = readdir(dir)) != NULL)
		ft_putendl(sd->d_name);
	return (1);
}
