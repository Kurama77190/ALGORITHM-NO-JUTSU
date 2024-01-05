/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samy <samy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 23:46:12 by samy              #+#    #+#             */
/*   Updated: 2023/08/24 00:03:42 by samy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void caca(char *str)
{
    int i;
    int nbr;
    
    i = 0;
    nbr = 0;
    while (str[i])
    {
        nbr = 0;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            nbr = str[i] - 'a';   
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            nbr = str[i] - 'A';
        }
        else
            nbr = 0;
        while (nbr >= 0)
        {
            write (1, &str[i], 1);
            nbr--;
        }
        i++;
    }
}





int main (int argc, char **argv)
{
    if (argc == 2)
    {
        caca(argv[1]);
    }
    write (1, "\n", 1);
    return (0);
}