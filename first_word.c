/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:43:11 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/15 10:07:09 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>

void	ft_first_word(char *s);
void	ft_putchar(char c);
bool ft_isspace(char c);

//									MAIN PROG
//--------------------------------------------------------------------------------------
int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_first_word(argv[1]);
	ft_putchar('\n');
}

//									HELPERS
//--------------------------------------------------------------------------------------

void	ft_first_word(char *s)
{
	size_t i = 0;
	while(ft_isspace(s[i]) && s[i])
		i++;
	while(!ft_isspace(s[i]) && s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

bool ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == '\v' || c == '\f');
}