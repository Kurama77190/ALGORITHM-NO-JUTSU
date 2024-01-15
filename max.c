/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:09:14 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/15 10:27:42 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
// push whitout main test

bool	ft_greater(int a, int b);
void	ft_swap(int *a, int *b);



int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	while (i < len - 1)
	{
		if(ft_greater(tab[i], tab[i + 1]))
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}
	return (tab[i]);
}

//						MAIN TEST
//-----------------------------------------------------------

int main (void)
{
	int test[]= {10, 50, 0, 9, 60, 22};
	size_t size = sizeof(test) / sizeof(test[0]);
	printf("%d", max(test, size));
}

//					    HELPERS
//-----------------------------------------------------------

bool	ft_greater(int a, int b)
{
	return (a > b);
}

void	ft_swap(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}