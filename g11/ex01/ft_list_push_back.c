/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 09:12:51 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/27 09:12:54 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*check;

	check = *begin_list;
	if (check)
	{
		while (check->next)
		{
			check = check->next;
		}
		check->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
