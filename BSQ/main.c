/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:27:24 by mmorel            #+#    #+#             */
/*   Updated: 2016/08/01 13:27:25 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		width_height_calc(char *ptr);

int		main(void)
{
	char	*str =  "...........................\n"
					"....o......................\n"
					"............o..............\n"
					"...........................\n"
					"....o......................\n"
					"...............o...........\n"
					"...........................\n"
					"......o..............o.....\n"
					"..o.......o................\n";
	//printf("%c\n", str[224]);
	width_height_calc(str);
	return(0);
}

					/*
					"...........................\n"
					"....o......................\n"
					"............o..............\n"
					"...........................\n"
					"....o......................\n"
					"...............o...........\n"
					"...........................\n"
					"......o..............o.....\n"
					"..o.......o................\n";

					"....\n"
					"o...\n"
					"...o\n"
					"....\n"
					"...o\n";
					*/
