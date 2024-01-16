/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:25:10 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/16 19:11:51 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

bool	ft_is_upcase(char c);
void	ft_putchar(char c);
void	ft_camel_to_snake(char *str);


//							MAIN PROG
//-------------------------------------------------------------

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_camel_to_snake(argv[1]);
	ft_putchar('\n');
	return (0);
}

//							HELPERS
//-------------------------------------------------------------

void	ft_camel_to_snake(char *str)
{
	size_t i = 0;
	while (str[i])
	{
		if(ft_is_upcase(str[i]))
		{
			ft_putchar('_');
			str[i]+= 32;
		}
		ft_putchar(str[i]);
		i++;
	}
}

bool ft_is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
