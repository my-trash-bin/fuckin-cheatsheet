/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:35:16 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 15:22:26 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (s1[idx] && s2[idx] && idx < n)
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	if (idx == n)
		idx--;
	return (s1[idx] - s2[idx]);
}
