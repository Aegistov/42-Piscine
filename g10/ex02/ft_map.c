/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 19:38:36 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/25 19:38:40 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*rval;

	i = 0;
	rval = (int*)malloc(sizeof(int) * length);
	if (rval == NULL)
		return (NULL);
	while (i < length)
	{
		rval[i] = f(tab[i]);
		i++;
	}
	return (rval);
}
