/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:10:34 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/03 22:23:50 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>


void	first_word(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] != ' ' && str[i + 1] != ' ')
			write(1, &str[i++], 1);
		else if (str[i] != ' ' && str[i + 1] == ' ')
		{
			write(1, &str[i], 1);
			break ;
		}	
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
}