/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:39:43 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/26 14:00:05 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		base_idx(char *base, char c)
{
	int idx;

	idx = 0;
	while (base[idx])
	{
		if (c == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' ||
			base[i] == '\t' || base[i] == '\n' || base[i] == '\v' ||
			base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i == 1 ? 0 : i);
}

int		ft_atoi_base(char *str, char *base)
{
	int basenbr;
	int sign;
	int result;
	int idx;

	result = 0;
	sign = 1;
	basenbr = check_base(base);
	if (!basenbr)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
		if ((idx = base_idx(base, *str++)) != -1)
			result = result * basenbr + idx;
		else
			break ;
	return (result * sign);
}
