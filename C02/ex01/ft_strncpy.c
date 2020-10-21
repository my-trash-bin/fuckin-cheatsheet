/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 12:50:09 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 11:32:10 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (idx < n && src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
		dest[idx++] = '\0';
	return (dest);
}
