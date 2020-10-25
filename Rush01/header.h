/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:14:41 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/24 16:27:52 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAINHEADER_
#define MAINHEADER_

#include <unistd.h>
#include <stdlib.h>

int		    is_number_sp(char c);
void		print_arr(char *arr);
void		ft_putchar(char c);
void		ft_write(char *str);
int			chk_cons(char *argv);
char		*split_condition(char *argv);

#endif