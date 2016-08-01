/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:27:13 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/21 22:27:15 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	upc(char i)
{
	i = i - 65;
	i = ((i + 42) % 26);
	i = i + 65;
	return (i);
}

char	loc(char i)
{
	i = i - 97;
	i = ((i + 42) % 26);
	i = i + 97;
	return (i);
}

char	rot(char i)
{
	if (i >= 65 && i <= 90)
	{
		return (upc(i));
	}
	else if (i >= 97 && i <= 122)
	{
		return (loc(i));
	}
	return (i);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rot(str[i]);
		i++;
	}
	return (str);
}
