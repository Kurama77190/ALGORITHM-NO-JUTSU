/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:12:50 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/05 00:50:01 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
void	put_reverse_str(char *str)
{
	int i = ft_strlen(str) - 1;
    
	while(i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
}



int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	put_reverse_str(argv[1]);
	return (0);
}

// fini !