/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:22:32 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 22:06:14 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# define BUF_SIZE 2048

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

//funclib.c
int		str_len(char *str);

//read.c
char	*ft_open_read(char *filename);

//print.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_list(t_dict **head);

//parse.c
t_dict	*malloc_list(int lines);
int		count_lines(char *buffer);

typedef struct	s_dict
{
	char *value;
	char *number;
	struct s_dict *link;
}				t_dict;

typedef struct	s_dict_list
{
	struct s_dict *head;
}				t_dict_list;

#endif
