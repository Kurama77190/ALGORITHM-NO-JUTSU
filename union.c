/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:35:00 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/05 02:15:33 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_union(const char *s1, const char *s2)
{
	int i = 0;
	bool dejavu[128] = {false};
	while (s1[i])
	{
		if (!dejavu[(size_t)s1[i]])
		{
			ft_putchar(s1[i]);
			dejavu[(size_t)s1[i]] = true;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!dejavu[(size_t)s2[i]])
		{
			ft_putchar(s2[i]);
			dejavu[(size_t)s2[i]] = true;
		}
		i++;
	}
}


int main (int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
