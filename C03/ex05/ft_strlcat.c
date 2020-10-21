/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:30:53 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 21:11:37 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int res;

	res = 0;
	while (*dest && res < size)
	{
		res++;
		dest++;
	}
	while (*src && res < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		res++;
	}
	if (res < size)
		*dest = 0;
	while (*src)
	{
		res++;
		src++;
	}
	return (res);
}
