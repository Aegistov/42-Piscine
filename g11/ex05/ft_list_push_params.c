/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:55:34 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/27 13:55:37 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*cargo;

	i = 0;
	while (i < ac)
	{
		cargo = ft_create_elem((void *) * (av[i);
		cargo->next = head;
	}
}
