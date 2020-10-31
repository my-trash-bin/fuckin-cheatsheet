/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:28:33 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 22:03:42 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_open_read(char *filename)
{
	int		fd;
	char	*buffer;
	int		fr;

	buffer = (char*)malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	fr = read(fd, buffer, BUF_SIZE);
	if (fr < 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	close(fd);
	return (buffer);
}
