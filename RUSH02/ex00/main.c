/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:22:20 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 22:42:19 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict_list	*init_list(void)
{
	t_dict *dict;
	t_dict_list *fl;
	
	dict = (t_dict*)malloc(sizeof(t_dict));
	fl = (t_dict_list*)malloc(sizeof(t_dict_list));
	fl->head = fl;
	return (fl);
}

int main(int argc, char **argv)
{
	char *buffer;
	t_dict_list *dict_list;
	int idx;

	idx = 0;
	if (argc == 2)
	{
		if (!(buffer = ft_open_read(argv[1])))
		{
			ft_putstr("Error\n");
			return (0);
		}
		dict_list = init_list();
		if(parse_list(buffer);
		free(buffer);
	}
	else if(argc == 3)
	{
		// byte = custom();
	}
	else
	return (0);
}
