/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 06:38:59 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/22 06:39:01 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define 

# include <unistd.h>
# include <string.h>

# define CLOSE 0
# define OPEN 1
# define TRUE 1
# define FALSE 0

typedef int ft_bool;

typedef	struct	s_door
{
	int	state;
}				t_door;

ft_bool close_door(t_door *door);
ft_bool open_door(t_door *door);
ft_bool is_door_open(t_door *door);
ft_bool is_door_close(t_door *door);

#endif
