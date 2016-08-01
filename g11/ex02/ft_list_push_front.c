/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 12:22:46 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/27 12:22:47 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *check;

	if (*begin_list)
	{
		check = ft_create_elem(data);
		check->next = *begin_list;
		*begin_list = check;
	}
	else
		*begin_list = ft_create_elem(data);
}
