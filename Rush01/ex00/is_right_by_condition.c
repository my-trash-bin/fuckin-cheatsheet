/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_right_by_condition.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:49:09 by minsekim          #+#    #+#             */
/*   Updated: 2020/10/25 19:13:28 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		is_right_by_condition(int v1111, char condition)
{
	char	max;
	char	can_vision;
	char	ch[4];
	int		i;

	change_int_to_char(ch, v1111);
	can_vision = '1';
	i = 0;
	max = ch[0];
	while (i < 4)
	{
		if (max < ch[i])
		{
			max = ch[i];
			can_vision++;
		}
		i++;
	}
	if (can_vision != condition)
		return (0);
	else
		return (1);
	return (-1);
}

void	change_int_to_char(char *ch, int v1111)
{
	ch[3] = v1111 % 10 + '0';
	ch[2] = (v1111 % 100 - v1111 % 10) / 10 + '0';
	ch[1] = (v1111 % 1000 - v1111 % 100) / 100 + '0';
	ch[0] = v1111 / 1000 + '0';
}
