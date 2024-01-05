/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:18:03 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/03 04:15:57 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	camel(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '_' && str[i] + 1] != '_')
		{
			str[++i] -= 32;  
			write(1, &str[i], 1);
		}
		else if (str[i] == '_' && str[i + 1] == '_')
			i++;
		else if (str[i] != '_' && str[i - 1] != '_')
			write(1, &str[i++], 1);
		else
			i++;
	}

}

int main(int argc, char **argv)
{
	if (argc == 2)
		camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}