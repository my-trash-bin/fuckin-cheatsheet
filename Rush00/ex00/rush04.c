/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sashin <sashin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:45:50 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/18 19:24:56 by sashin           ###   ########.fr       */
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
			if (col == 1 && row == 1)
				ft_putchar('A');
			else if ((col == x && col != 1) && (row == y && row != 1))
				ft_putchar('A');
			else if ((col == 1 && row == y) || (col == x && row == 1))
				ft_putchar('C');
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
