/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 11:18:50 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/26 14:00:19 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_valid(char *base)
{
	int idx1;
	int idx2;

	idx1 = 0;
	while (base[idx1])
	{
		idx2 = idx1 + 1;
		while (base[idx2])
		{
			if (base[idx1] == base[idx2])
				return (0);
			idx2++;
		}
		if (base[idx1] == '-' || base[idx1] == '+')
			return (0);
		idx1++;
	}
	if (idx1 <= 1)
		return (0);
	return (idx1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_nbr;

	base_nbr = is_valid(base);
	if (!base_nbr)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base((nbr / base_nbr) * -1, base);
		ft_putchar(base[(nbr % base_nbr) * -1]);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= base_nbr)
	{
		ft_putnbr_base((nbr / base_nbr), base);
		ft_putnbr_base((nbr % base_nbr), base);
	}
	else
		ft_putchar(base[nbr]);
}
