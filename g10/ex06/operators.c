/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 11:53:09 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/26 11:53:14 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		ft_div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero\n", 24);
	return (a / b);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero\n", 24);
	return (a % b);
}

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_mult(int a, int b)
{
	return (a * b);
}
