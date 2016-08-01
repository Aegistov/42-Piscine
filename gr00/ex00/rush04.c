/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganesh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:39:41 by aganesh           #+#    #+#             */
/*   Updated: 2016/07/17 19:39:42 by aganesh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i != x && i != 1) && (j != y && j != 1))
				ft_putchar(' ');
			else if (j == 1 && i == 1)
				ft_putchar('A');
			else if ((i == 1 && j == y) || (i == x && j == 1))
				ft_putchar('C');
			else if (j == y && i == x)
				ft_putchar('A');
			else if ((i == 1) || (i == x) || (j == 1) || (j == y))
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
