/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_fts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:12 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:50:13 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

bool	check_is_printable(char c)
{
	unsigned char cc;

	cc = c;
	return (c <= '~' && c >= ' ');
}

bool	check_charset_is_valid(char *str, long idx)
{
	return (str[idx - 1] != str[idx - 2] &&
			str[idx - 1] != str[idx - 3] &&
			str[idx - 2] != str[idx - 3]);
}

bool	check_charset_is_printable(char *str, long idx)
{
	return (check_is_printable(str[idx - 1]) &&
			check_is_printable(str[idx - 2]) &&
			check_is_printable(str[idx - 3]));
}
