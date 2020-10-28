/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 23:26:19 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/28 12:34:21 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_arr(int *arr)
{
	int idx;

	idx = 0;
	while (idx < 10)
	{
		ft_putchar(arr[idx] + '0');
		idx++;
	}
	write(1, "\n", 1);
}

int			check(int *col, int q)
{
	int idx;

	idx = 0;
	while (idx < q)
	{
		if (col[q] == col[idx]
		|| col[q] - col[idx] == (q - idx)
		|| col[idx] - col[q] == (q - idx))
			return (0);
		idx++;
	}
	return (1);
}

void		dfs(int *col, int q, int *cnt)
{
	int idx;

	idx = 0;
	if (q == 9)
	{
		*cnt += 1;
		print_arr(col);
		return ;
	}
	while (idx < 10)
	{
		col[q + 1] = idx;
		if (check(col, q + 1))
			dfs(col, q + 1, cnt);
		idx++;
	}
}

int			ft_ten_queens_puzzle(void)
{
	int col[10];
	int cnt;

	cnt = 0;
	dfs(col, -1, &cnt);
	return (cnt);
}
