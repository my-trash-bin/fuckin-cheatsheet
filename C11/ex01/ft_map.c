/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:30:11 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 14:36:37 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		idx;
	int		val;
	int		*new_tab;

	if (!length)
		return (0);
	new_tab = (int*)malloc(sizeof(int) * length);
	idx = 0;
	while (idx < length)
	{
		val = (*f)(tab[idx]);
		new_tab[idx] = val;
		idx++;
	}
	return (new_tab);
}
