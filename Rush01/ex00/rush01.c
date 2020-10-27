/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:49:09 by minsekim          #+#    #+#             */
/*   Updated: 2020/10/25 20:18:00 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		rush01(char *str)
{
	char	condition[17];
	char	submit[17];
	int		i;

	if (is_right_input(str, condition))
		return (0);
	submit[16] = '\0';
	init_and_usehint(submit, condition);
	condition[16] = '\0';
	i = 1;
	while (i)
	{
		i = loop(submit);
		if (is_answer(submit, condition))
			break ;
		submit[15]++;
	}
	if (submit[0] != '5')
		print(submit);
	else
		write(1, "Error\n", 6);
	return (0);
}

int		is_right_input(char *str, char *condition)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (str[i * 2] <= '4' && str[i * 2] >= '1')
			condition[i] = str[i * 2];
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}
