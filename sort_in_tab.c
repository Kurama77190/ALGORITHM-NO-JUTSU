/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 23:50:26 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/10 04:05:20 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool greater(int i, int j)
{
	return (i > j);
}

void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


// un tres beau bubble sort
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int len = size;
	bool issorted;
	while (!issorted)
	{
		issorted = true;
		i = 0;
		while(i < len - 1)
		{
			if (greater(tab[i], tab[i + 1]))
			{
				ft_swap(&tab[i], &tab[i + 1]);
				issorted = false;
			}
			i++;
		}
		len--;
	}
}

void print_array(const int* array, unsigned int size) // for test
{
    unsigned int i = 0;

    while (i < size)
    {
        printf("%d ", array[i]);
		i++;
    }
    printf("\n");

}


int main (void) // push whitout main !
{
	int test[] = {3, 8, 10, 4, 2, 1, 8, 12, 2};
    unsigned int size = sizeof(test) / sizeof(*test); // nombre d'elements = taille_octets(tout le tableau) / taille_octet(1 element)
    print_array(test, size);
	sort_int_tab(test, size);
    print_array(test, size);
}

/*
int a = 4;
machine : ____ 4 octets
int a[3];
machine ____/____/____ 12 octets = de la place pour 3 ints
sizeof(a) = tous les octets alloues = 12
12 / sizeof(int) = nb d'elements
*/

