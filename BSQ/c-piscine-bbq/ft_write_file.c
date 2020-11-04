/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:49:58 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:49:59 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

char	*ft_write_file(void)
{
	int		fd;
	char	buffer;

	if ((fd = open("file", O_WRONLY | O_CREAT | O_TRUNC, 0666)) < 0)
		return (NULL);
	while (read(STDIN_FILENO, &buffer, 1))
		write(fd, &buffer, 1);
	close(fd);
	return ("file");
}
