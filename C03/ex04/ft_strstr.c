/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:11:26 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/21 17:35:51 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && (*a == *b))
		{
			a++;
			b++;
		}
		if (*b == 0)
			return (str);
		str++;
	}
	return (0);
}
