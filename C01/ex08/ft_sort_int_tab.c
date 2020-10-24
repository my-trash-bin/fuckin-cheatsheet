/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 16:26:39 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/17 18:24:36 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int idx1;
	int idx2;
	int temp;

	idx1 = 0;
	while (idx1 < size - 1)
	{
		idx2 = idx1 + 1;
		while (idx2 < size)
		{
			if (tab[idx1] > tab[idx2])
			{
				temp = tab[idx1];
				tab[idx1] = tab[idx2];
				tab[idx2] = temp;
			}
			idx2++;
		}
		idx1++;
	}
}
