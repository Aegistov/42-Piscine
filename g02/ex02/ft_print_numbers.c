/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:31:55 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/14 11:31:58 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_print_numbers(void)
{
	char ch;
	ch = '0';
	while(ch <= '9')
	{
		ft_putchar(ch);
		ch++;
	}
}