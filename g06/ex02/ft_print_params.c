/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:56:58 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/20 15:56:59 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int h;

	h = 1;
	while (h < argc)
	{
		i = 0;
		while (argv[h][i])
		{
			ft_putchar(argv[h][i]);
			i++;
		}
		ft_putchar('\n');
		h++;
	}
	return (0);
}
