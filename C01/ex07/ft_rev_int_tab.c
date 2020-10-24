/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 16:16:31 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/17 18:37:58 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int idx;
	int len;
	int temp;

	idx = 0;
	len = size;
	while (idx < (size / 2))
	{
		temp = tab[idx];
		tab[idx++] = tab[--len];
		tab[len] = temp;
	}
}
