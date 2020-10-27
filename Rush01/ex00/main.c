/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_nocommet_norOK.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:49:09 by minsekim          #+#    #+#             */
/*   Updated: 2020/10/25 20:16:03 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		loop(char *submit)
{
	if (submit[0] != '5')
	{
		while (is_comb(submit))
			submit[15]++;
		return (1);
	}
	else
		return (0);
	return (-1);
}

int		is_number_sp(char c)
{
	return ((c >= '1' && c <= '4') || c == ' ');
}

int		chk_cons(char *argv)
{
	int idx;

	idx = 0;
	while (argv[idx])
	{
		if (!is_number_sp(argv[idx]))
			return (0);
		idx++;
	}
	if (idx != 31)
		return (0);
	return (1);
}

int		main(int argc, char *argv[])
{
	if (argc == 2 && chk_cons(argv[1]))
		rush01(argv[1]);
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
