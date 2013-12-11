/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 16:58:03 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/11 16:58:15 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main (void) {
    struct stat buf;
    int x;

    x = stat ("junklink", &buf);
    if (S_ISLNK(buf.st_mode)) printf (" stat says link\n");
    if (S_ISREG(buf.st_mode)) printf (" stat says file\n");

    x = lstat ("junklink", &buf);
    if (S_ISLNK(buf.st_mode)) printf ("lstat says link\n");
    if (S_ISREG(buf.st_mode)) printf ("lstat says file\n");

    return 0;
}
