/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:31:03 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/28 12:31:08 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "./ft_error_codes.h"

void	ft_putstr(char *str, int fd);

void	open_file(char *argv, int *fd, int *ecode)
{
	*fd = open(argv, O_RDWR);
	*ecode = errno;
	if (*fd == -1)
	{
		ft_putstr("ft_cat: ", 1);
		ft_putstr(argv, 1);
		ft_putstr(": ", 1);
		ft_putstr(g_errtable[*ecode], 2);
		ft_putstr("\n", 1);
	}
}

void	close_file(int *fd, char *argv, int *ecode)
{
	*fd = close(*fd);
	if (*fd == -1)
	{
		ft_putstr("ft_cat: ", 1);
		ft_putstr(argv, 1);
		ft_putstr(": ", 1);
		ft_putstr(g_errtable[*ecode], 2);
		ft_putstr("\n", 1);
	}
}

void	read_file(int fd, int *ecode, char *argv)
{
	int		ret;
	char	buf[1];

	ret = 1;
	while (ret == 1)
	{
		ret = read(fd, &buf, 1);
		if (ret == 1)
			ft_putstr(&buf[0], 1);
	}
	if (fd == -1)
	{
		ft_putstr("ft_cat: ", 1);
		ft_putstr(argv, 1);
		ft_putstr(": ", 1);
		ft_putstr(g_errtable[*ecode], 2);
		ft_putstr("\n", 1);
	}
}

void	do_things(char *argv)
{
	int	fd;
	int	ecode;

	open_file(argv, &fd, &ecode);
	if (fd != -1)
		read_file(fd, &ecode, argv);
	if (fd != -1)
		close_file(&fd, argv, &ecode);
}