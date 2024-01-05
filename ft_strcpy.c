/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samy <samy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:47:12 by samy              #+#    #+#             */
/*   Updated: 2023/08/29 18:53:09 by samy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

// int main (int argc, char **argv)
// {
//     (void)argc;
//     char s2[] = "";
//     printf("mon tableau input est : %s\nmon tableau copier est : %s\n", argv[1], ft_strcpy(argv[1], s2));
// }