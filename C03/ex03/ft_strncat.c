/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:58:00 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 17:11:04 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int di;
	unsigned int si;

	di = 0;
	si = 0;
	while (dest[di])
		di++;
	while (si < nb && src[si])
	{
		dest[di + si] = src[si];
		si++;
	}
	dest[di + si] = 0;
	return (dest);
}
