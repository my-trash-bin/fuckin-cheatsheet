/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:23:34 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 16:57:28 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int di;
	int si;

	di = 0;
	si = 0;
	while (dest[di])
		di++;
	while (src[si])
	{
		dest[di + si] = src[si];
		si++;
	}
	dest[di + si] = 0;
	return (dest);
}
