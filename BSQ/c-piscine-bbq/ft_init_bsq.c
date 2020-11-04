/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:04 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:51:21 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

bool	ft_is_last_positon(char ch, char prev_ch)
{
	return (ch == '\n' && prev_ch != '\n' && prev_ch != '\0');
}

void	ft_draw_map(char *file, t_map map)
{
	int		i;
	char	*ch;

	if (!(map.grid = check_grid(ft_get_lines(file), map.height)))
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	i = 0;
	ch = map.grid[0];
	while (ch[i])
		i++;
	map.fill_char = ch[i - 1];
	map.empty = ch[i - 3];
	bsq(map);
}

void	ft_get_map_info(int fd, char *file)
{
	char		ch;
	char		tmp;
	char		prev_ch;
	t_map		map;

	ch = 0;
	prev_ch = 0;
	while (read(fd, &ch, 1) && ch != '\n')
		;
	map.width = 0;
	map.height = 1;
	while (read(fd, &ch, 1))
	{
		if (map.height == 1 && ch != '\n')
			map.width++;
		if (ch == '\n')
			map.height++;
		prev_ch = tmp;
		tmp = ch;
	}
	close(fd);
	if (ft_is_last_positon(ch, prev_ch))
		ft_draw_map(file, map);
	else
		ft_putstr("map error\n", 2);
}

void	ft_init_bsq(char *file)
{
	int	fd;

	fd = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
	{
		ft_putstr("map error\n", 2);
		close(fd);
	}
	else
		ft_get_map_info(fd, file);
}
