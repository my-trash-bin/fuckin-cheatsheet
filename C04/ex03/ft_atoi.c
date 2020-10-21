/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:58:42 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 22:08:02 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(unsigned char c)
{
	if (c == '\n' || c == '\t' || c == '\f')
		return (1);
	if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int minus;

	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str)
		str++;
	while (--str)
	{
		
	}
}
