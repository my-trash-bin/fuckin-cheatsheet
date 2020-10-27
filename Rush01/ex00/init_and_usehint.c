/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_usehint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:49:09 by minsekim          #+#    #+#             */
/*   Updated: 2020/10/25 20:18:59 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init_and_usehint(char *submit, char *condition)
{
	int i;

	i = 0;
	while (i < 16)
		submit[i++] = '1';
	i = 0;
	while (i < 16)
	{
		if (condition[i] == '4')
			submit_change_4(i, submit);
		else if (condition[i] == '1')
			submit_change_1(i, submit);
		i++;
	}
}

void	submit_change_1(int i, char *submit)
{
	if (i < 4)
		submit[i] = '4';
	else if (i < 8)
		submit[i + 8] = '4';
	else if (i < 12)
		submit[4 * i - 32] = '4';
	else if (i < 16)
		submit[4 * i - 45] = '4';
}

void	submit_change_4(int i, char *submit)
{
	int j;
	int add_i;
	int start_i;

	if (0 <= i && i < 16)
	{
		start_i = get_start_i(i);
		add_i = get_add_i(i);
	}
	else
		write(1, "Error\n", 6);
	j = 0;
	while (j < 4)
	{
		submit[start_i + add_i * j] = '1' + j;
		j++;
	}
}

int		get_start_i(int i)
{
	if (0 <= i && i < 4)
		return (i);
	else if (i < 8)
		return (i);
	else if (i < 12)
		return (4 * i - 32);
	else if (i < 16)
		return (4 * i - 45);
	write(1, "Error\n", 6);
	return (0);
}

int		get_add_i(int i)
{
	if (0 <= i && i < 4)
		return (4);
	else if (i < 8)
		return (-4);
	else if (i < 12)
		return (1);
	else if (i < 16)
		return (-1);
	write(1, "Error\n", 6);
	return (0);
}
