/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:59:42 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/05 02:22:15 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}


int main (int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	int a = ft_atoi(argv[1]);
	int b = ft_atoi(argv[3]);
	char operator = (argv[2][0]);
	int result = 0;
	if (operator == '+')
	{
		result = a + b;
		printf("%d\n", result);
	}
	else if (operator == '-')
	{
		result = a - b;
		printf("%d\n", result);
	}
	else if (operator == '/')
	{
		result = a / b;
		printf("%d\n", result);
	}
	else if (operator == '%')
	{
		result = a % b;
		printf("%d\n", result);
	}
	else if (operator == '*')
	{
		result = a * b;
		printf("%d\n", result);
	}
	else
		write (1, "\n", 1);
}



