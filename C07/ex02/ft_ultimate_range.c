/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 04:40:50 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/02 16:34:25 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int result;
	int *tmp;

	if (min >= max)
		return (0);
	result = max - min;
	*range = (int*)malloc(sizeof(int) * result);
	if (!*range)
		return (-1);
	tmp = *range;
	while (min < max)
	{
		*tmp = min;
		min++;
		tmp++;
	}
	return (result);
}
