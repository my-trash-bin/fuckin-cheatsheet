/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:35:16 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 23:14:40 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	if (n <= 0)
		return (0);
	while (s1[idx] && s2[idx] && idx + 1 < n && s1[idx] == s2[idx])
		idx++;
	return (s1[idx] - s2[idx]);
}
