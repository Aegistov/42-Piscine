/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:08:49 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/21 23:08:51 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (i > j && i > k)
	{
		if (j > k)
			return (j);
		else
			return (k);
	}
	else if (j > i && j > k)
	{
		if (i > k)
			return (i);
		else
			return (k);
	}
	else if (k > i && k > j)
	{
		if (i > j)
			return (i);
		else
			return (j);
	}
	return (0);
}
