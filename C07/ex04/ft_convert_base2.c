/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:43:49 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 11:49:19 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *nbr, char *base);
int		ft_is_valid(char *base);
int		ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int		idx;
	int		len;
	char	temp;

	idx = 0;
	len = ft_strlen(str);
	while (idx < len / 2)
	{
		temp = str[idx];
		str[idx] = str[len - idx - 1];
		str[len - idx - 1] = temp;
		idx++;
	}
	return (str);
}

char	*ft_itoa_base(int nbr, char *base, char *dest)
{
	int				i;
	int				base_len;
	long			nbr_;

	i = 0;
	nbr_ = nbr;
	nbr_ = nbr_ < 0 ? -nbr_ : nbr_;
	if (!(base_len = ft_is_valid(base)))
		return (0);
	if (nbr_ == 0)
		dest[i++] = base[0];
	while (nbr_ > 0)
	{
		dest[i++] = base[nbr_ % base_len];
		nbr_ /= base_len;
	}
	if (nbr < 0)
		dest[i++] = '-';
	dest[i] = '\0';
	return (ft_strrev(dest));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*dest;

	if (!(ft_is_valid(base_from) && ft_is_valid(base_to)))
		return (0);
	number = ft_atoi_base(nbr, base_from);
	dest = (char *)malloc(sizeof(char) * 34);
	ft_itoa_base(number, base_to, dest);
	return (dest);
}
