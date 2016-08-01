/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:13:44 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/20 16:14:26 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int h;

	h = argc - 1;
	while (h > 0)
	{
		i = 0;
		while (argv[h][i])
		{
			ft_putchar(argv[h][i]);
			i++;
		}
		ft_putchar('\n');
		h--;
	}
	return (0);
}
