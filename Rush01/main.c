/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:14:16 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/24 16:27:54 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char *argv[])
{
	char *condition;

	if (argc != 2 || !chk_cons(argv[1])){
		ft_write("Error");
		ft_putchar('\n');
		return (0);
	}
	condition = split_condition(argv[1]);
 	print_arr(condition);

	/*
		logic
	*/
	return (0);
}

//  "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
