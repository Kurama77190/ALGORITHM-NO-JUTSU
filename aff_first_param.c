/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samy <samy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:39:53 by samy              #+#    #+#             */
/*   Updated: 2023/08/29 18:44:07 by samy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}


int main (int argc, char **argv)
{
    if (argc < 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    ft_putstr(argv[1]);
    write (1, "\n", 1);
    
}