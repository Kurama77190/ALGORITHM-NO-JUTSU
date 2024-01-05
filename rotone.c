/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:45:40 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/03 19:15:25 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void roto(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] += 1;
			write(1, &str[i++], 1);
			
		}	
			
		else if (str[i] == 'z')
		{
			write(1, "a", 1);
			i++;
		}
		else if (str[i] == 'Z')
		{
			write(1, "A", 1);
			i++;
		}
		else
		write(1, &str[i++], 1);
	}
}			

int main (int argc, char **argv)
{
	if(argc == 2)
		roto(argv[1]);
	write(1, "\n", 1);
	return (0);
}