/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 21:23:39 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 11:30:47 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_c2hex(char c)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		if (!(str[idx] >= 32 && str[idx] <= 126))
			ft_print_c2hex(str[idx]);
		else
			ft_putchar(str[idx]);
		idx++;
	}
}
