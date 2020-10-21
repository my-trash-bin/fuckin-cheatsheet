/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:25:54 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/19 23:25:39 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int			ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char		*ft_strcapitalize(char *str)
{
	int space;
	int idx;

	idx = 0;
	space = 1;
	while (str[idx])
	{
		if (ft_islower(str[idx]) || ft_isupper(str[idx]))
		{
			if (space && str[idx] >= 'a' && str[idx] <= 'z')
				str[idx] -= 32;
			if (!space && str[idx] >= 'A' && str[idx] <= 'Z')
				str[idx] += 32;
			space = 0;
		}
		else if (str[idx] >= '0' && str[idx] <= '9')
			space = 0;
		else
			space = 1;
		idx++;
	}
	return (str);
}
