/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:16:20 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/21 11:16:38 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	new = (char*)malloc(sizeof(*new) * (len));
	if (new == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	new[len] = '\0';
	return (new);
}
