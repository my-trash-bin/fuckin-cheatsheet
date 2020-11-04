/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seobae <seobae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:50:15 by seobae            #+#    #+#             */
/*   Updated: 2020/11/05 03:54:47 by seobae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bbq.h"

void	ft_putchar(char c, int code)
{
	if (code < 1 || 2 < code)
		code = 2;
	write(code, &c, 1);
}

void	ft_putstr(char *str, int code)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], code);
		i++;
	}
}

bool	ft_is_space(char ch)
{
	return (ch == ' ' || ch == '\n' || ch == '\v' ||
			ch == '\t' || ch == '\r' || ch == '\f');
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int		n;
	int		nbr;

	nbr = 0;
	n = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr * n);
}
