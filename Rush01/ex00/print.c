/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_usehint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:49:09 by minsekim          #+#    #+#             */
/*   Updated: 2020/10/25 15:09:51 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print(char *arr)
{
	int idx;
	int cnt;

	idx = 0;
	cnt = 0;
	while (idx < 16)
	{
		cnt++;
		ft_putchar(arr[idx]);
		if (cnt != 4)
			ft_putchar(' ');
		if (cnt == 4)
		{
			ft_putchar('\n');
			cnt = 0;
		}
		idx++;
	}
}
