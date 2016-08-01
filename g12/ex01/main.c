/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 21:06:04 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/28 21:06:06 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int		funnel(char *argv);
void	ft_putstr(char *str, int fd);

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		ft_putstr("File name missing.\n", 1);
		return (0);
	}
	else
		while (i < argc)
		{
			funnel(argv[i]);
			i++;
		}
	return (0);
}
