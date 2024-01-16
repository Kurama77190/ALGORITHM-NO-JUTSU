/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:17:18 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/16 19:06:55 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int 	ft_atoi_ez(char *str);
void	ft_putnbr(int nb);
void	ft_print_line(int tab, int nb);
void	ft_print_tab(int nb);


//						MAIN PROG
//------------------------------------------------------------

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	int nb = ft_atoi_ez(argv[1]);
	ft_print_tab(nb);
	return (0);
}

//						HELPERS
//------------------------------------------------------------

void	ft_print_tab(int nb)
{
	int tab = 1;
	while (tab <= 9)
	{
		ft_print_line(tab, nb);
		ft_putchar('\n');
		tab++;
	}
}

void	ft_print_line(int tab, int nb)
{
	int result = tab * nb; 
	ft_putnbr(tab);
	ft_putchar(' ');
	ft_putchar('x');
	ft_putchar(' ');
	ft_putnbr(nb);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(result);
}

int	ft_atoi_ez(char *str)
{
	int result = 0;
	int i = 0;
	while(str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	if(nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
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