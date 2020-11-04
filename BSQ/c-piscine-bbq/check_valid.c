/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:10 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:50:11 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

bool	check_charset(char **grid)
{
	long		i;
	int			j;

	i = 0;
	j = 0;
	while (grid[0][i])
		i++;
	if (ft_strlen(grid[0]) > 3 && check_charset_is_valid(grid[0], i) &&
									check_charset_is_printable(grid[0], i))
	{
		while (j < (i - 3))
		{
			if (grid[0][j] < '0' || grid[0][j] > '9')
				return (false);
			j++;
		}
		if (!grid[1] || (grid[1][0] != grid[0][i - 2] &&
						grid[1][0] != grid[0][i - 3]))
			return (false);
		return (true);
	}
	else
		return (false);
}

bool	check_height(char **grid, int height)
{
	int			n_n;
	char		*n;
	long		i;

	i = 0;
	n = (char *)malloc(ft_strlen(grid[0]) - 3 + 1);
	while (i < ft_strlen(grid[0]) - 3)
	{
		n[i] = grid[0][i];
		i++;
	}
	n[i] = 0;
	n_n = ft_atoi(n);
	free(n);
	return (n_n == height - 1 ? true : false);
}

bool	check_width(char **grid)
{
	long	width;
	long	i;

	width = ft_strlen(grid[1]);
	i = 2;
	while (grid[i])
	{
		if (ft_strlen(grid[i]) != width)
			return (false);
		i++;
	}
	return (!(grid[i - 1][width]) ? true : false);
}

bool	check_width_cons(char **grid)
{
	long	i;
	long	j;
	long	k;
	char	empty;
	char	obstacle;

	i = 0;
	j = 1;
	while (grid[0][i])
		i++;
	empty = grid[0][i - 3];
	obstacle = grid[0][i - 2];
	while (grid[j])
	{
		k = 0;
		while (grid[j][k])
		{
			if (grid[j][k] != empty && grid[j][k] != obstacle)
				return (false);
			k++;
		}
		j++;
	}
	return (true);
}

char	**check_grid(char **grid, int height)
{
	if (!(check_charset(grid)))
		return (NULL);
	if (!(check_height(grid, height)))
		return (NULL);
	if (!(check_width(grid)))
		return (NULL);
	if (!(check_width_cons(grid)))
		return (NULL);
	return (grid);
}
