/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 07:29:44 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/19 07:29:46 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *i;

	while (*str)
	{
		i = str;
		while (*str && *to_find && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (!*to_find)
		{
			return (i);
		}
		str = i + 1;
	}
	return (NULL);
}
