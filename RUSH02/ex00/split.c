/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:25:06 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/31 22:27:15 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**split(char *str)
{
	char	**array;
	char	*word;
	int		length;
	int		offset;
	int		idx;

	idx = 0;
	offset = 0;
	while(idx < count_words(str))
	{
		word = find_word(str, &length, &offset);
		array[idx] = (char*)malloc(sizeof(char) * (length + 1));
		array[length] = 0;
		
		idx++;
	}

}