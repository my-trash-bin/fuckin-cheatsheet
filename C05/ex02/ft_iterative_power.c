/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:02:13 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/27 03:59:14 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int idx;
	int result;

	result = 1;
	idx = 0;
	if (power < 0)
		return (0);
	while (idx < power)
	{
		result *= nb;
		idx++;
	}
	return (result);
}
