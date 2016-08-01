/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 06:39:09 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/22 06:39:11 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], i);
	}
}

ft_bool open_door(t_door *door)
{
	ft_putstr(’Door opening...’);
	state = OPEN;
	return (TRUE);
}

ft_bool close_door(t_door *door)
{
	ft_putstr(’Door closing...’);
	state = CLOSE;
	return (FALSE);
}

ft_bool is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state = OPEN);
}
ft_bool is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
}
