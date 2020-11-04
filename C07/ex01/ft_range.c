/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 04:28:21 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/02 19:32:18 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int idx;
	int len;

	if (min >= max)
		return (0);
	idx = 0;
	len = max - min;
	arr = (int*)malloc(sizeof(int) * len);
	while (idx < len)
	{
		arr[idx] = min;
		idx++;
		min++;
	}
	return (arr);
}
