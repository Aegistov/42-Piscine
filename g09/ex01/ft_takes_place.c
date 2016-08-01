/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:43:48 by mmorel            #+#    #+#             */
/*   Updated: 2016/07/21 18:43:49 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		timeconvert(int n)
{
	if (n > 12 && n < 24)
	{
		n -= 12;
	}
	return (n);
}

void	ft_takes_place(int hour)
{
	int y;

	y = hour + 1;
	if (hour >= 100 && hour <= 2400)
		hour = hour / 100;
	if (hour >= 0 && hour <= 24)
	{
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 24)
			hour = 0;
		if (hour == 0)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		if (hour == 11)
			printf("%d.00 A.M. AND 12.00 P.M.\n", hour);
		if (hour == 12)
			printf("%d.00 P.M. AND 1.00 P.M.\n", hour);
		if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		if (hour < 11 && hour != 0)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		else if (hour > 12 && hour != 23)
			printf("%d.00 P.M. AND %d.00 P.M.\n",
				timeconvert(hour), timeconvert(hour + 1));
	}
}
