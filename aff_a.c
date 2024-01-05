/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samy <samy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:27:31 by samy              #+#    #+#             */
/*   Updated: 2024/01/05 02:33:46 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

static bool str_contains(const char* s, char c);
static void ft_putstr(const char* s);

int main (int argc, char **argv)
{ 
    if (argc != 2)
    {
        ft_putstr("a\n");
        return (0);
    }

	if (str_contains(argv[1], 'a'))
        ft_putstr("a\n");
	else
        ft_putstr("\n");
}

static bool str_contains(const char* s, char c)
{
	while (*s)
	{
		if (*s == c)
			return true;
		s++;
	}
	return false;
}

static void ft_putstr(const char* s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
