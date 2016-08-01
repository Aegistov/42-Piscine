/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:52:15 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/16 14:52:56 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int num;
	int product;

	num = 1;
	product = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (num <= nb)
		{
			product *= num;
			num++;
		}
		return (num);
	}
}
