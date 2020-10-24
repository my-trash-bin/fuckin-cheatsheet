<<<<<<< HEAD:Rush00/rush04.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:45:50 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/17 23:15:36 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char);

void rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return;
	int r;
	int c;

	/*
	** flag of r = 1 or c = 1
	** not r = 1 && c = 1
	*/

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == x))
				ft_putchar('A');
			else if ((r == 1 && c == x) || (c == 1 && r == y))
				ft_putchar('C');
			else if (r < y && c < x && r > 1 && c > 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			++c;
		}
		ft_putchar('\n');
		++r;
	}
}

//TODO debug from #1

int main(){
	rush04(5,3);
}
// end #1
=======
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
>>>>>>> 78f6e71da394e3eb16368257ad28eb42a48f9fc8:Rush00/ex00/rush04.c
