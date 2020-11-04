/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:47:10 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/02 16:24:07 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int cnt;
	int idx;

	idx = 0;
	cnt = 0;
	while (str[idx])
	{
		while (str[idx] && is_in(str[idx], charset))
			idx++;
		if (str[idx] && !is_in(str[idx], charset))
		{
			cnt++;
			while (str[idx] && !is_in(str[idx], charset))
				idx++;
		}
	}
	return (cnt);
}

char	*ft_malloc(char *str, char *charset)
{
	int		idx;
	int		cnt;
	char	*word;

	cnt = 0;
	while (str[cnt] && !is_in(str[cnt], charset))
		cnt++;
	word = (char *)malloc(sizeof(char) * (cnt + 1));
	idx = 0;
	while (str[idx] && !is_in(str[idx], charset))
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		idx;
	char	**arr;

	idx = 0;
	arr = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (*str)
	{
		while (*str && is_in(*str, charset))
			str++;
		if (*str && !is_in(*str, charset))
		{
			arr[idx] = ft_malloc(str, charset);
			idx++;
			while (*str && !is_in(*str, charset))
				str++;
		}
	}
	arr[idx] = 0;
	return (arr);
}
