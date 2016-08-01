/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 01:31:19 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/22 01:31:21 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int i;

	i = 1;
	if (base > 1)
	{
		if (base % 2 == 0)
			i += ft_collatz_conjecture(base / 2);
		else
			i += ft_collatz_conjecture((base * 3) + 1);
	}
	return (i);
}
