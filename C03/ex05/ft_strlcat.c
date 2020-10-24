/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:30:53 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/24 11:02:41 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int idx;
	unsigned int dest_size;
	unsigned int src_size;

	idx = 0;
	while (dest[idx])
		idx++;
	dest_size = idx;
	src_size = 0;
	if (size > idx)
	{
		while (src[src_size] && idx < size - 1)
		{
			dest[idx] = src[src_size];
			idx++;
			src_size++;
		}
	}
	dest[idx] = 0;
	while (src[src_size])
		src_size++;
	return ((dest_size < size ? dest_size : size) + src_size);
}
