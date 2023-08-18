/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:40:45 by mkane             #+#    #+#             */
/*   Updated: 2023/08/02 16:40:48 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char x, char y, char z)
{
	if (x == '7' && y == '8' && z == '9')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
	}
	else
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_put_char(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
