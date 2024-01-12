/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:37:41 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/12 16:17:31 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void	ft_putchar(const char c);
void	commone_char(bool *array, const char *s1, const char *s2);
void	ft_inter(const char* s1, const char *s2);

//									EX-OUTPUT
//-----------------------------------------------------------------------------

//$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//padinto$

//									MAIN TEST
//-----------------------------------------------------------------------------

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}

//									HELPERS
//-----------------------------------------------------------------------------

void	commone_char(bool *array, const char *s1, const char *s2)
{
	size_t i = 0;
	size_t j;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				array[(size_t)s1[i]] = true;
			j++;
		}
		i++;
	}
}

void ft_inter(const char* s1, const char *s2)
{
	bool dejavu[128] = {false};
	commone_char(dejavu, s1, s2);
	size_t i = 0;
	while (s1[i])
	{
		if (dejavu[(size_t)s1[i]])
		{
			ft_putchar(s1[i]);
			dejavu[(size_t)s1[i]] = false;			
		}
		i++;
	}	
}

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

