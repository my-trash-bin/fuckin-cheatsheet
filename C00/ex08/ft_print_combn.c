/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:36:18 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/19 18:32:40 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_recur_combn(int n, int depth, int before, char number[])
{
	int number_index;
	int cur_num;

	number_index = 0;
	cur_num = before + 1;
	if (depth == n)
	{
		while (number_index < n)
			ft_putchar(number[number_index++]);
		if (number[0] != 58 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (cur_num <= 9)
	{
		number[depth] = 48 + cur_num;
		ft_recur_combn(n, depth + 1, cur_num, number);
		cur_num++;
	}
}

void		ft_print_combn(int n)
{
	char number[n];

	ft_recur_combn(n, 0, -1, number);
}
