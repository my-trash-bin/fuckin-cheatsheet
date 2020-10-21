/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:00:37 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 11:32:32 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int				ft_str_is_alpha(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		if (!ft_isalpha(str[idx]))
			return (0);
		idx++;
	}
	return (1);
}
