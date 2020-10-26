/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:58:42 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/24 18:39:04 by hyeopark         ###   ########.fr       */
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

int		is_number(unsigned char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int i;
	int number;

	i = 1;
	number = 0;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	while (*str && is_number(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * i);
}
