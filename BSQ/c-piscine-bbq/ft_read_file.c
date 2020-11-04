/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:03 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:51:36 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

long	ft_get_number_lines(char **lines)
{
	long i;

	i = 0;
	while (lines[i])
		i++;
	return (i);
}

char	*ft_read_file(char *path)
{
	int				i;
	int				fd;
	unsigned int	file_size;
	char			current;
	char			*filestr;

	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	file_size = 0;
	while (read(fd, &current, 1))
		file_size++;
	if (!(filestr = malloc(sizeof(*filestr) * (file_size + 1))))
		return (NULL);
	close(fd);
	fd = open(path, O_RDONLY);
	i = 0;
	while (read(fd, filestr + i, 1))
		i++;
	close(fd);
	filestr[file_size] = '\0';
	return (filestr);
}

char	**ft_get_lines(char *path)
{
	char **lines;
	char *filestr;

	if (!(filestr = ft_read_file(path)))
		return (NULL);
	lines = ft_split(filestr, '\n');
	free(filestr);
	return (lines);
}
