/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:49:26 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 22:24:18 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	check_operator(char *operator)
{
	char c;

	if (ft_strlen(operator) == 1)
	{
		c = operator[0];
		if (c == '+' || c == '-' || c == '/' || c == '*' || c == '%')
			return (c);
	}
	return (0);
}

void	calc(int op1, int op2, char operator)
{
	if (operator == '-')
		ft_putnbr(op1 - op2);
	else if (operator == '+')
		ft_putnbr(op1 + op2);
	else if (operator == '*')
		ft_putnbr(op1 * op2);
	else if (operator == '/')
	{
		if (op2 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return ;
		}
		ft_putnbr(op1 / op2);
	}
	else if (operator == '%')
	{
		if (op2 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return ;
		}
		ft_putnbr(op1 % op2);
	}
	ft_putchar('\n');
}

int		main(int ac, char *av[])
{
	int		operand1;
	int		operand2;
	char	operator;

	if (ac == 4)
	{
		operand1 = ft_atoi(av[1]);
		operand2 = ft_atoi(av[3]);
		if (!(operator = check_operator(av[2])))
		{
			ft_putstr("0\n");
			return (0);
		}
		calc(operand1, operand2, operator);
	}
	return (0);
}
