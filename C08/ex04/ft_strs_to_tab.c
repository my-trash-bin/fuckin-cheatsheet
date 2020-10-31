/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:35:13 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 17:29:09 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					str_len(char *str)
{
	int					len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char				*str_cpy(char *s1, char *s2)
{
	int					idx;

	idx = 0;
	while (s2[idx])
	{
		s1[idx] = s2[idx];
		idx++;
	}
	s1[idx] = 0;
	return (s1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s;
	int					idx;

	idx = 0;
	s = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!s)
		return (NULL);
	while (idx < ac)
	{
		s[idx].size = str_len(av[idx]);
		if (!(s[idx].str = (char*)malloc(sizeof(char) * (s[idx].size + 1))))
			return (0);
		if (!(s[idx].copy = (char*)malloc(sizeof(char) * (s[idx].size + 1))))
			return (0);
		str_cpy(s[idx].str, av[idx]);
		str_cpy(s[idx].copy, av[idx]);
		idx++;
	}
	s[idx].str = 0;
	return (s);
}
