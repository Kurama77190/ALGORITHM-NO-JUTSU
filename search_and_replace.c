/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:54:59 by samy              #+#    #+#             */
/*   Updated: 2024/01/05 02:32:52 by sben-tay         ###   ########.fr       */
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
    if (argc != 4)
    {
    write (1, "\n", 1);
    return (0);       
    }
    int i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
        {
            argv[1][i] = argv[3][0];
        }
        else if (argv[2][1] || argv [3][1])
        {
            write(1, "\n", 1);
            return (0);
        }
        i++;
    }
    ft_putstr(argv[1]);
    write(1, "\n", 1);
}