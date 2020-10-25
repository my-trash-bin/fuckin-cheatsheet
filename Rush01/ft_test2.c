/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:49:09 by minsekim          #+#    #+#             */
/*   Updated: 2020/10/25 14:00:55 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init_and_usehint(char *submit, char *condition)
{
	int		i;
	int		j;

	i = 0;
    while (i < 16)
        submit[i++] = '1';
    i = 0;
	while (i < 16)
	{
        if (condition[i] == '4')
        {
            if (i < 4)
            {
                submit[i] = '1';
                submit[i + 4] = '2';
                submit[i + 8] = '3';
                submit[i + 12] = '4';
            }
            else if(i < 8)
            {
                submit[i + 8] = '1';
                submit[i + 4] = '2';
                submit[i] = '3';
                submit[i - 4] = '4';
            }
            else if(i < 12)
            {
                submit[4 * i - 32] = '1';
                submit[4 * i - 31] = '2';
                submit[4 * i - 30] = '3';
                submit[4 * i - 29] = '4';
            }
            else if(i < 16)
            {
				submit[4 * i - 45] = '1';
				submit[4 * i - 46] = '2';
				submit[4 * i - 47] = '3';
				submit[4 * i - 48] = '4';
            }
        }
        else if (condition[i] == '1')
        {
            if (i < 4)
                submit[i] = '4';
            else if(i < 8)
                submit[i + 8] = '4';
            else if(i < 12)
                submit[4 * i - 32] = '4';
            else if(i < 16)
                submit[4 * i - 45] = '4';
        }
		i++;
	}
}

int		is_comb_in_a_row(char ch1, char ch2, char ch3, char ch4)
{
	if (ch1 == ch2 || ch1 == ch3 || ch1 == ch4)
		return (1);
	else if (ch2 == ch3 || ch2 == ch4 || ch3 == ch4)
		return (1);
	else
		return (0);
	return (-1);
}

int		is_comb(char *submit)
{
	char	*s;
	int		i;
    int     temp;
	i = 15;
	while (i > 0)
	{
		if (submit[i] >= '5')
		{
			submit[i] -= 4;
			submit[i - 1]++;
		}
		i--;
	}
	s = submit;
	i = 0;
    while (i < 16)
    {
        if (i < 4 && is_comb_in_a_row(s[i], s[i + 4], s[i + 8], s[i + 12]))
        {
            return (1);
        }
        if (4 <= i && i < 8 && is_comb_in_a_row(s[i + 8], s[i + 4], s[i], s[i - 4]))
             return (1);
        if (8 <= i && i < 12)
        {
            temp = 4 * i - 32;
            if(is_comb_in_a_row(s[temp], s[temp + 1], s[temp + 2], s[temp + 3]))
                return (1);
        }
        if (12 <= i && i < 16)
        {
            temp = 4 * i - 45;
            if (is_comb_in_a_row(s[temp], s[temp - 1], s[temp - 2], s[temp - 3]))
                return (1);
        }
        i++;
    }
	return (0);
}

int		is_right_by_condition(int v1111, char condition)
{
	char	max;
	char	can_vision;
	char    ch[4];
    int     i;
    
    ch[3] = v1111 % 10 + '0';
    ch[2] = (v1111 % 100 - v1111 % 10) / 10 + '0';
    ch[1] = (v1111 % 1000 - v1111 % 100) / 100 + '0';
    ch[0] = v1111 / 1000 + '0';
    
	can_vision = '1';
    i = 0;
    max = ch[0];
    while (i < 4)
    {
        if (max < ch[i])
        {
            max = ch[i];
            can_vision++;
        }
        i++;
    }
	if (can_vision != condition)
		return (0);
	else
		return (1);
	return (-1);
}

int		is_answer(char *s, char *d)
{
	int		i;
	int		v1111;
    int     temp;
	i = 0;
    while (i < 16)
    {
        if (i < 4)
        {
            v1111 = 1000 * (s[i] - '0') + 100 * (s[i + 4] - '0');
            v1111 += 10 * (s[i + 8] - '0') + (s[i + 12] - '0');
        }
        else if(i < 8)
        {
            v1111 = 1000 * (s[i + 8] - '0') + 100 * (s[i + 4] - '0');
            v1111 += 10 * (s[i] - '0') + (s[i - 4] - '0');
        }
        else if(i < 12)
        {
            temp = 4 * i - 32;
            v1111 = 1000 * (s[temp] - '0') + 100 * (s[temp + 1] - '0');
            v1111 += 10 * (s[temp + 2] - '0') + (s[temp + 3] - '0');
        }
        else if(i < 16)
        {
            temp = 4 * i - 45;
            v1111 = 1000 * (s[temp] - '0') + 100 * (s[temp - 1] - '0');
            v1111 += 10 * (s[temp - 2] - '0') + (s[temp - 3] - '0');
        }
        if (!is_right_by_condition(v1111, d[i]))
            return (0);
        i++;
    }
	return (1);
}

int		loop(char *submit)
{
	int i;
    i = 0;
        if (submit[0] != '5')
        {
            while (is_comb(submit))
                submit[15]++;
             return (1);
        }
        else
            return (0);

    return (-1);
}


int		rush01(char *str)
{
	char	condition[16];
	char	submit[17];
	int		i;

	i = 0;
	while (i < 16)
	{
		if (str[i * 2] <= '4' && str[i * 2] >= '1')
			condition[i] = str[i * 2];
		else
		{
			write(1, &"Error: This is not number", 25);
			return (0);
		}
		i++;
	}
	submit[16] = '\0';
    init_and_usehint(submit, condition);
    i = 1;
	while (i)
	{
		i = loop(submit);
		if (is_answer(submit, condition))
			break ;
		submit[15]++;
	}
           print(submit);
	return (0);
}

int	main(int argc, char *argv[])
{
	rush01("2 1 3 2 2 3 1 2 2 1 3 2 2 3 1 2");
	return (0);
}
