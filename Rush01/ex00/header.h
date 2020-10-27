/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:14:41 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/25 19:23:08 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	print(char *arr);
void	ft_putchar(char ch);
int		loop(char *submit);
void	init_and_usehint(char *submit, char *condition);
void	submit_change_1(int i, char *submit);
void	submit_change_4(int i, char *submit);
int		get_start_i(int i);
int		get_add_i(int i);
int		is_right_by_condition(int v1111, char condition);
void	change_int_to_char(char *ch, int v1111);
int		is_answer(char *s, char *d);
int		get_v1100(char *s, int i);
int		get_v0011(char *s, int i);
int		is_comb(char *submit);
int		is_comb_in_a_row(char ch1, char ch2, char ch3, char ch4);
int		is_comb_int_a_row_all(char *s, int i);
int		rush01(char *str);
int		is_right_input(char *str, char *condition);

#endif
