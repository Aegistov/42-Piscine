/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 00:49:28 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/22 00:49:30 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int i;
	int h;

	i = 0;
	h = 0;
	while (factory[i])
	{
		while (factory[i][h])
		{
			free(factory[i][h])
			h++;
		}
	free(factory[i]);
	h = 0;
	i++;
	}
	free(factory);
}
