/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funclib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:52:05 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 22:20:03 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		str_len(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

int		is_space(char c)
{
	return (c == ' ' || c == '\t');
}