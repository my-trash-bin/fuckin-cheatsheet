/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 05:34:51 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/02 22:56:56 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char		*ft_malloc(char **strs, int size, char *sep)
{
	char	*res;
	int		idx;
	int		result;

	idx = 0;
	result = 0;
	if (!size)
	{
		res = malloc(sizeof(char));
		*res = 0;
		return (res);
	}
	while (idx < size)
	{
		result += ft_strlen(strs[idx]);
		idx++;
	}
	result += ft_strlen(sep) * (size - 1);
	res = (char*)malloc(sizeof(char) * (result + 1));
	return (res);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		idx;
	int		i;
	int		j;
	int		k;

	idx = 0;
	j = 0;
	i = 0;
	if (!(ans = ft_malloc(strs, size, sep)))
		return (0);
	while (idx < size)
	{
		k = 0;
		while (strs[j][k])
			ans[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && idx < (size - 1))
			ans[i++] = sep[k++];
		idx++;
		j++;
	}
	ans[i] = 0;
	return (ans);
}
