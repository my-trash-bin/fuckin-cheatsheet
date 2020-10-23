/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sashin <sashin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:28:57 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/18 19:25:03 by sashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (++row <= y)
	{
		col = 0;
		while (++col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == x))
				ft_putchar('o');
			else if ((row == y && col == 1) || (col == x && row == 1))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (col == x || col == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
