/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:29:59 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 11:49:42 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_is_valid(char *base)
{
	int		idx;
	int		j;

	idx = 0;
	if (base[idx] == '\0' || ft_strlen(base) <= 1)
		return (0);
	while (base[idx])
	{
		j = idx + 1;
		if (base[idx] == '\n' || base[idx] == '\t' ||
			base[idx] == '\f' || base[idx] == '\v' ||
			base[idx] == '\r' || base[idx] == ' ' ||
			base[idx] == '+' || base[idx] == '-')
			return (0);
		while (base[j])
		{
			if (base[idx] == base[j])
				return (0);
			j++;
		}
		idx++;
	}
	return (idx);
}

int		ft_check_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int base_num;
	int sign;
	int answer;
	int idx;

	answer = 0;
	sign = 1;
	if (!ft_is_valid(base))
		return (0);
	base_num = ft_strlen(base);
	while (*str == '\n' || *str == '\t' || *str == '\f' ||
			*str == '\v' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((idx = ft_check_index(*str, base)) != -1)
	{
		answer = answer * base_num + idx;
		str++;
	}
	return (sign * answer);
}
