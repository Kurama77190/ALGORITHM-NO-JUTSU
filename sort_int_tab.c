/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:51:33 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/11 00:30:41 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

bool	greater(int a, int b);
void	ft_swap(int *a, int *b);
void	ft_print_array(int *tab, size_t len);



void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int len = size;
	bool issorted = false;
	while (!issorted)
	{
		issorted = true;
		i = 0;
		while (i < len - 1)
		{
			if(greater(tab[i], tab[i + 1]))
			{
				ft_swap(tab + i, tab + i + 1);
				issorted = false;
			}
			i++;
		}
		len--;
	}
}


//	sort_int_tab...						MAIN TESTER
//--------------------------------------------------------------------------------------

int main (void)
{
	int array[] = {10, 8, 5, 1, 9, 3, 2, 7, 6, 4};
    size_t size = sizeof(array) / sizeof(array[0]);
	 
	ft_print_array(array, size);
	sort_int_tab(array, size);
	ft_print_array(array, size);
}

//										HELPERS
//--------------------------------------------------------------------------------------


void	ft_print_array(int *tab, size_t len)
{
	size_t i = 0;
	while (i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return ;
}

bool greater(int a, int b)
{
	return (a > b);
}

void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

