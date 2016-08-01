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

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	open_file(int *fd, char *argv)
{
	*fd = open(argv, O_RDONLY);
	if (*fd == -1)
		ft_putstr("open() error");
}

void	read_file(int *fd, char *buf, int *ret)
{
	*ret = read(*fd, buf, BUF_SIZE);
	buf[*ret] = '\0';
}

void	close_file(int *fd)
{
	*fd = close(*fd);
	if (*fd == -1)
		ft_putstr("close() error");
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argv[1] == NULL)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else if (argc == 2)
	{
		open_file(&fd, argv[1]);
		if (fd == -1)
			return (1);
		read_file(&fd, buf, &ret);
		ft_putstr(buf);
		close_file(&fd);
	}
	return (0);
}
