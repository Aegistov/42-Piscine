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

#include "error_codes.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUF_SIZE 28999

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	open_file(int *fd, char *argv, int *ecode)
{
	*fd = open(argv, O_RDWR);
	*ecode = errno;
	if (*fd == -1)
		ft_putstr(g_errtable[*ecode]);
}

void	read_file(int *fd, char *buf, int *ret, int *ecode)
{
	*ret = read(*fd, buf, BUF_SIZE);
	buf[*ret] = '\0';
	*ecode = errno;
	if (*ret == -1)
		ft_putstr(g_errtable[*ecode]);
}

void	close_file(int *fd, int *ecode)
{
	*fd = close(*fd);
	*ecode = errno;
	if (*fd == -1)
		ft_putstr(g_errtable[*ecode]);
}

int		funnel(char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		ecode;

	open_file(&fd, argv, &ecode);
	if (fd == -1)
		return (1);
	read_file(&fd, buf, &ret, &ecode);
	if (fd == -1)
		return (1);
	ft_putstr(buf);
	close_file(&fd, &ecode);
	if (fd == -1)
		return (1);
	return (0);
}
