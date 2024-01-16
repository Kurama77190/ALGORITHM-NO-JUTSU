/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:28:16 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/17 00:35:10 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define  INT_MAX_SQRT (46341)

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int 	ft_atoi(char *str);
bool	ft_is_prime(int nb);
void	ft_prime_sum(int nb);

//							MAIN PROG
//-----------------------------------------------------------------------

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	int result = ft_atoi(argv[1]);
	ft_prime_sum(result);
	ft_putchar('\n');
}

//							HELPERS
//-----------------------------------------------------------------------

void	ft_prime_sum(int nb)
{
	int result = 0;
	if (nb < 0)
	{
		ft_putnbr(0);
		return ;
	}	
	while (nb)
	{
		if (ft_is_prime(nb))
			result += nb;
		nb--;
	}
	ft_putnbr(result);
}

bool	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	int i = 2;
	while (i * i <= nb && i * i <= INT_MAX_SQRT)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}