/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 11:51:40 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/26 11:51:42 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		do_op(char *op, int a, int b)
{
	if (*op == '+')
		return (ft_add(a, b));
	if (*op == '-')
		return (ft_sub(a, b));
	if (*op == '*')
		return (ft_mult(a, b));
	if (*op == '/')
		return (ft_div(a, b));
	if (*op == '%')
		return (ft_mod(a, b));
	return (0);
}

int		main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		(*a)(char *);

	a = &ft_atoi;
	num1 = a(argv[1]);
	num2 = a(argv[3]);
	if (argc > 4)
		return (0);
	ft_putnbr(do_op(argv[2], num1, num2));
}
