/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:07 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:52:36 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

void	fill_square(int bsq, t_map *map)
{
	long	i;
	long	j;

	i = 0;
	while (i < bsq)
	{
		j = 0;
		while (j < bsq)
		{
			map->grid[map->pos_y + i][map->pos_x + j] = map->fill_char;
			j++;
		}
		i++;
	}
}

void	print_map(t_map map)
{
	long	i;
	long	j;

	i = 1;
	while (i < map.height)
	{
		j = 0;
		while (j < map.width)
		{
			ft_putchar(map.grid[i][j], 1);
			j++;
		}
		i++;
		ft_putchar('\n', 1);
	}
	i = 0;
	while (i < map.height)
	{
		free(map.grid[i]);
		i++;
	}
	free(map.grid);
}

bool	check_square(long size, long x, long y, t_map map)
{
	long	i;
	long	j;

	i = 0;
	while (i < size && x + i < map.width)
	{
		j = 0;
		while (j < size && y + j < map.height)
		{
			if (map.grid[j + y][i + x] != map.empty)
				return (false);
			j++;
		}
		i++;
	}
	return (i == size && j == size ? true : false);
}

void	run(t_map *map, long x, long y, long *cur_max)
{
	long	size;

	size = 1;
	while (check_square(size, x, y, *map))
		size++;
	size -= 1;
	if (size > *cur_max)
	{
		*cur_max = size;
		map->pos_y = y;
		map->pos_x = x;
	}
}

void	bsq(t_map map)
{
	long	bsq;
	long	i;
	long	j;

	i = 1;
	bsq = 0;
	map.pos_x = 0;
	map.pos_y = 0;
	while (i + bsq < map.height)
	{
		j = 0;
		while (j + bsq < map.width)
		{
			run(&map, j, i, &bsq);
			j++;
		}
		i++;
	}
	fill_square(bsq, &map);
	print_map(map);
}
