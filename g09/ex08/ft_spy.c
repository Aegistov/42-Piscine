/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 01:49:50 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/22 01:49:52 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		ft_alert(char *str)
{
	char *a;
	char *p;
	char *po;

	a = "attack";
	p = "president";
	po = "powers";
	if ((ft_strcmp(str, a) == 0) || (ft_strcmp(str, p) == 0)
		|| (ft_strcmp(str, po) == 0))
	{
		ft_putstr("Alert!!!\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		h;
	int		j;
	char	temp[750];

	i = 1;
	while (i < argc)
	{
		j = 0;
		h = 0;
		while (argv[i][h])
		{
			if (argv[i][h] != ' ')
			{
				temp[j] = argv[i][h];
				j++;
			}
			h++;
		}
		temp[h] = '\0';
		ft_strlowcase(temp);
		if (ft_alert(temp) == 0)
			return (0);
		i++;
	}
}
