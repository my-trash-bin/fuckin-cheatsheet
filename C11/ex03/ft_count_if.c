/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:40:00 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 17:39:41 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		cnt;
	int		idx;

	cnt = 0;
	idx = 0;
	while (idx < length)
	{
		if ((*f)(tab[idx]))
			cnt++;
		idx++;
	}
	return (cnt);
}
