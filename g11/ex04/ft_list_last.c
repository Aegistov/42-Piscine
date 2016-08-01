/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:05:16 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/27 13:05:19 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	while(begin_list->next)
	{
		if (begin_list->next == NULL)
			return (begin_list);
		begin_list = begin_list next;
	}
	return (0);
}
