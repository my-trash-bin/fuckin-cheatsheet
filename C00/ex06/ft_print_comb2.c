/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 11:45:56 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/19 18:33:54 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_int(int n, int m, int flag)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
	ft_putchar(' ');
	ft_putchar((m / 10) + '0');
	ft_putchar((m % 10) + '0');
	if (flag)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_print_comb2(void)
{
	int a;
	int b;
	int flag;

	a = 0;
	flag = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98)
				flag = 0;
			ft_print_int(a, b, flag);
			b++;
		}
		a++;
	}
}
