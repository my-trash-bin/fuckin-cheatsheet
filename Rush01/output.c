/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:29:34 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/25 13:59:07 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(char *str)
{
	int idx;

	idx = 0;
	while(str[idx])
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

void		print_arr(char *arr)
{
	int idx;
	int cnt;
	
	idx = 0;
	cnt = 0;
	while(idx < 16)
	{
		cnt++;
		ft_putchar(arr[idx]);
		ft_putchar(' ');
		if(cnt == 4)
		{
			ft_putchar('\n');
			cnt = 0;
		}
		idx++;
	}
}
