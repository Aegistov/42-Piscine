/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:24:11 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/23 22:24:14 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wrdlen(char *str)
{
	int		i;
	int		count;
	int		gate;

	i = 0;
	count = 0;
	gate = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && gate == 1)
			gate = 0;
		if ((str[i] != ' ' || str[i] != '\t' || str[i] != '\n') && gate == 0)
		{
			gate = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		start(int i, char *str)
{
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int		size(int i, char *str)
{
	int		s;

	s = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		i++;
	return (i - s);
}

char	**ft_split_whitespaces(char *str)
{
	char	**main;
	int		ini;
	int		j;
	int		k;
	int		s;

	ini = 0;
	k = 0;
	main = (char**)malloc(sizeof(char*) * (wrdlen(str) + 1));
	while (ini < wrdlen(str))
	{
		j = 0;
		k = start(k, str);
		s = size(k, str);
		main[ini] = (char*)malloc(sizeof(char) * (s + 1));
		while (j < s)
			main[ini][j++] = str[k++];
		main[ini][j] = '\0';
		ini++;
	}
	main[wrdlen(str)] = 0;
	return (main);
}
