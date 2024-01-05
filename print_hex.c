/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 21:40:49 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/03 21:55:24 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi_ez(char *str)
{
	int i = 0;
	int result = 0;
	
	while (str[i])
	{
		result = result * 10 + (str[i++] - 48);
	}
	return (result);
}

void	print_hex(int c)
{
	char base[]="0123456789abcdef";
	
	if (c >= 16)
		print_hex(c / 16);
	write(1, &base[c % 16], 1);	
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = ft_atoi_ez(argv[1]);
	print_hex(i);
	write(1, "\n", 1);
	return (0);
}
