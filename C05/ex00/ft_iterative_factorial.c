/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 20:52:24 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/27 06:31:11 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	fact = nb;
	while (--nb)
		fact *= nb;
	return (fact);
}
