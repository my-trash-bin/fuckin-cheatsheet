/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:21:36 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 22:24:35 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/*
	Rules : [a number][0 to n spaces]:[0 to n spaces][any printable characters]\n
*/

int		count_lines(char *buffer)
{
	int idx;
	int cnt;

	cnt = 0;
	idx = 0;
	while(buffer[idx])
	{
		if(buffer[idx] == '\n')
			cnt++;
		else if(buffer[idx] == '\0')
			cnt++;
		idx++;
	}
	return (cnt);
}

t_dict	*create_node(char *value, char *number)
{
	t_dict *dict;

	if(!(dict = (t_dict*)malloc(sizeof(t_dict))))
		return (NULL);
	dict->value = value;
	dict->number = number;
	dict->link = NULL;
	return (dict);
}

t_dict_list		*parse_list(char *buffer)
{
	int idx;
	char *val;
	t_dict_list list;

	list = NULL;
	idx = 0;
	while(buffer[idx])
	{
		val = &buffer[idx];
		//string value
		while(buffer[idx] && !is_space(buffer[idx]))
			idx++;
		//white spaces
		while(buffer[idx] && is_space(buffer[idx]))
			idx++;
		//colon
		if(buffer[idx] && !(buffer[idx] == ':'))
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		idx++;
		//white spaces
		while(buffer[idx] && is_space(buffer[idx]))
			idx++;
	}
}