/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:44:14 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 17:48:01 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ascend(int *tab, int length, int (*f)(int, int))
{
	int idx;

	idx = 0;
	while (idx < length - 1)
	{
		if ((*f)(tab[idx], tab[idx + 1]) > 0)
			return (0);
		idx++;
	}
	return (1);
}

int		ft_is_descend(int *tab, int length, int (*f)(int, int))
{
	int idx;

	idx = 0;
	while (idx < length - 1)
	{
		if ((*f)(tab[idx], tab[idx + 1]) < 0)
			return (0);
		idx++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return ((ft_is_ascend(tab, length, f) || ft_is_descend(tab, length, f)));
}
