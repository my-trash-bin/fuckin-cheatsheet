/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:49:55 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:49:56 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc == 1)
		ft_init_bsq(ft_write_file());
	while (++i < argc)
	{
		ft_init_bsq(argv[i]);
		if (i < argc - 1)
			ft_putchar('\n', 1);
	}
	return (0);
}
