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

int		is_comb(char *submit)
{
	int i;

	i = 15;
	while (i > 0)
	{
		if (submit[i] >= '5')
		{
			submit[i] -= 4;
			submit[i - 1]++;
		}
		i--;
	}
	i = 0;
	while (i < 16)
	{
		if (is_comb_int_a_row_all(submit, i))
			return (1);
		i++;
	}
	return (0);
}

int		is_comb_in_a_row(char ch1, char ch2, char ch3, char ch4)
{
	if (ch1 == ch2 || ch1 == ch3 || ch1 == ch4)
		return (1);
	else if (ch2 == ch3 || ch2 == ch4 || ch3 == ch4)
		return (1);
	else
		return (0);
	return (-1);
}

int		is_comb_int_a_row_all(char *s, int i)
{
	int temp;

	if (i < 4 && is_comb_in_a_row(s[i], s[i + 4], s[i + 8], s[i + 12]))
		return (1);
	if (4 <= i && i < 8 && is_comb_in_a_row(s[i + 8], s[i + 4], s[i], s[i - 4]))
		return (1);
	if (8 <= i && i < 12)
	{
		temp = 4 * i - 32;
		if (is_comb_in_a_row(s[temp], s[temp + 1], s[temp + 2], s[temp + 3]))
			return (1);
	}
	if (12 <= i && i < 16)
	{
		temp = 4 * i - 45;
		if (is_comb_in_a_row(s[temp], s[temp - 1], s[temp - 2], s[temp - 3]))
			return (1);
	}
	return (0);
}
