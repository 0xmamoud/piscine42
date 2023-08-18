/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:44:48 by mkane             #+#    #+#             */
/*   Updated: 2023/08/03 08:44:52 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (0 <= nb && nb < 10)
	{
		ft_put_char((nb + '0'));
	}
	else if (nb < 0)
	{
		ft_put_char('-');
		ft_putnbr((nb * (-1)));
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
}
