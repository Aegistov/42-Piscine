/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:27:12 by mmorel            #+#    #+#             */
/*   Updated: 2016/08/01 13:27:13 by mmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*char	print_square(char *ptr, int s, int e)
{
	while (s < e)
	{
		if (ptr[s] != 'x')
			ptr[s] = 'x';
		s++;
	}
	return (*ptr);
}*/

int 	bsq_loc(int *map, int max)
{
	int 	i;
	int 	num;

	i = 0;
	num = 0;
	while (i < max + 1)
	{
		if (map[i] == '\n')
			i++;
		else if (map[i] > map[num])
			num = i;
		i++;
	}
	printf("\nlargest square starts at index: %d\n", num);
	return (num);
}

char	square_param(char *ptr, int w, int *map, int s)
{
	int 	i;
	int 	sql;
	int 	h;

	h = 0;
	i = 0;
	sql = map[s];
	while (i < sql)
	{
		//print_square(ptr, s, sql);
		while (s < sql)
		{
			if (ptr[s] != 'x')
				ptr[s] = 'x';
			s++;
		}
		s = s + w + 1;
		i++;
	}
	return (*ptr);
}

int		min_compare(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

int		possibility_map(int	*map, int i, int w)
{
	int		start;
	int		h;

	h = 0;
	start = i - w - 1;
	printf("\n");
	printf("Second map, largest square\n");
	while (start > 0)
	{	
		if (map[start] == '\n')
			{
				map[start] = '\n';
				start--;
			}
		if (map[start] == 0)
			map[start] = 0;
		else if (map[start + 1] == '\n')
			map[start] = 1;
		else
			map[start] = map[start] + (min_compare(map[start + 1],
				min_compare(map[start + (w + 1)], map[start + (w + 2)])));
		start--;
	}
	while (h < i + 1)
	{
		if (map[h] == '\n')
		{
			printf("%c", map[h]);
		}
		else
			printf("%d", map[h]);
		h++;
	}	
	return (*map);
}

int		ctoi(char *ptr, int max, int *map)
{
	int		i;
	int		h;

	h = 0;
	i = max + 1;
	while (i >= 0)
	{
		if (ptr[i] == 'o')
			map[i] = 0;
		else if (ptr[i] == '.' || ptr[i] == 'x')
			map[i] = 1;
		else if (ptr[i] == '\n')
			map[i] = '\n';
		i--;	
	}
	printf("First map, initial go's and no go's\n");
	while (h < max + 1)
	{
		if (map[h] == '\n')
		{
			printf("%c", map[h]);
		}
		else
			printf("%d", map[h]);
		h++;
	}
	return (*map);
}

void		width_height_calc(char *ptr)
{
	int		width;
	int		height;
	int		max;
	int		i;
	int		*num_field;
	int 	bsq;
	int 	h;

	bsq = 0;
	h = 0;
	width = 0;
	height = 0;
	max = 0;
	i = 0;
	while (ptr[i] != '\0' && width == 0)
	{
		if (ptr[i] == '\n')
			width = i;
		i++;
	}
	while (ptr[i] != '\0')
	{
		if (ptr[i] == '\n')
			height++;
		i++;
	}
	max = ((width * (height + 1) - width + height) + (width - 1));
	printf("index of max position in square: %d\n", max);
	printf("width of square (not including line breaks): %d\n", width);
	printf("height of square (using 0-based indexing): %d\n", height);
	num_field = malloc(sizeof(ptr));
	*num_field = ctoi(ptr, max, num_field);
	*num_field = possibility_map(num_field, max, width);
	bsq = bsq_loc(num_field, max);
	printf("Largest square starts here: %d\n", bsq);
	square_param(ptr, width, num_field, bsq);
	printf("This should be the final output:\n");
	while (h < max + 1)
	{
		printf("%c", ptr[h]);
		h++;
	}
	//send out values of width, height, max to other functions
}
