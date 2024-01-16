/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:20:44 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/16 23:16:09 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define INT_MIN (-2147483648)

size_t	ft_nbr_len(int nbr);


char	*ft_itoa(int nbr)
{
	size_t len = ft_nbr_len(nbr);
	if (nbr == INT_MIN)
		return ("-2147483648\0");
	if (nbr == 0)
		return ("0\0");
	char *out = malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	len--;
	if (nbr < 0)
	{
		out[0] = '-';
		nbr *= -1;
	}
	
	while(nbr)
	{
		out[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return(out);
}



//							MAIN TEST
//----------------------------------------------------------------
int main (int argc, char **argv)
{
	(void)argc;
	int test = atoi(argv[1]);
	printf("ceci est le result de itoa : %s\n", ft_itoa(test));
}

//							HELPER
//----------------------------------------------------------------

size_t	ft_nbr_len(int nbr)
{
	size_t len = 0;
	int n = nbr;
	if (nbr < 0)
		len++;
	while(n)
	{
		len++;
		n/= 10;	
	}
	return (len);
}
