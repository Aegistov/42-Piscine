/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 05:16:15 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/22 05:16:18 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "Profession"
# include <string.h>

typedef	struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
