/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:40:43 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/03 23:45:42 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return ft_pgcd(b, a % b);
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("%d\n", ft_pgcd(a, b));
	return (0);
}