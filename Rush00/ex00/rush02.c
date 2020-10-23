/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sashin <sashin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:24:19 by bukim             #+#    #+#             */
/*   Updated: 2020/10/18 19:24:59 by sashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		rush(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (++row <= y)
	{
		col = 0;
		while (++col <= x)
		{
			if (row == 1 && (col == 1 || col == x))
				ft_putchar('A');
			else if (row == y && (col == 1 || col == x))
				ft_putchar('C');
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
