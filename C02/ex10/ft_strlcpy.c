/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:59:04 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 21:43:29 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int idx;
	unsigned int cnt;

	idx = 0;
	cnt = 0;
	while (src[idx] && idx < (size - 1))
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	while (src[cnt])
		cnt++;
	return (cnt);
}
