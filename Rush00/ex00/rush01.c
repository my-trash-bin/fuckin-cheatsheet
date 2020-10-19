/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sashin <sashin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:17:56 by sashin            #+#    #+#             */
/*   Updated: 2020/10/18 19:25:01 by sashin           ###   ########.fr       */
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
			if ((col == x && col != 1) && (row == y && row != 1))
				ft_putchar('/');
			else if (col == 1 && row == 1)
				ft_putchar('/');
			else if ((col == 1 && row == y) || (col == x && row == 1))
				ft_putchar('\\');
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
