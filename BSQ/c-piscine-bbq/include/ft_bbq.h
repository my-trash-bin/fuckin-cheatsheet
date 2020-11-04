/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bbq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:24 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:54:37 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BBQ_H
# define FT_BBQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# define FILE_PATH "resources/test.text"

typedef struct	s_map {
	long		height;
	long		width;
	char		empty;
	char		obstacle;
	char		fill_char;
	char		**grid;
	long		pos_x;
	long		pos_y;
}				t_map;

int				ft_strlen(char *str);
int				ft_atoi(char *str);

char			*ft_write_file(void);
char			**ft_split(char *str, char target);
char			**ft_get_lines(char *path);
char			**check_grid(char **grid, int height);

void			ft_init_bsq(char *file);
void			ft_putstr(char *str, int code);
void			ft_putchar(char c, int code);
void			bsq(t_map map);

bool			ft_is_space(char ch);
bool			check_charset_is_valid(char *str, long idx);
bool			check_charset_is_printable(char *str, long idx);

#endif
