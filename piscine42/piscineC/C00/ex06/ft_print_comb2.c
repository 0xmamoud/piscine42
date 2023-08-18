/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:17:09 by mkane             #+#    #+#             */
/*   Updated: 2023/08/02 20:17:46 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_put_nbr(int x, int y)
{
	int	x_to_integer;
	int	y_to_integer;
	int	x_modulo;
	int	y_modulo;

	x_to_integer = x / 10 + '0';
	y_to_integer = y / 10 + '0';
	x_modulo = x % 10 + '0';
	y_modulo = y % 10 + '0';
	ft_put_char(x_to_integer);
	ft_put_char(x_modulo);
	write(1, " ", 1);
	ft_put_char(y_to_integer);
	ft_put_char(y_modulo);
	if (!(x == 98 && y == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_put_nbr(x, y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
