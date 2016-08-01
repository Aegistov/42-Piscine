/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 22:42:35 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/16 22:42:37 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacco(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacco(index - 1) + ft_fibonacco(index - 2));
}
