/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:25:01 by mkane             #+#    #+#             */
/*   Updated: 2023/08/09 17:25:03 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_str_ok(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[0] || !str[1])
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == str[j] || str[i] == '-' || str[i] == '+'
			|| ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		{
			return (0);
		}
		while (str[j])
		{
			if (str[i] == str[j] || str[i] == '-' || str[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long		big_nb;

	big_nb = nbr;
	if (!ft_is_str_ok(base))
		return ;
	if (nbr == -2147483648)
	{
		ft_put_char('-');
		ft_putnbr_base(2147483648 / ft_strlen(base), base);
		ft_putnbr_base(2147483648 % ft_strlen(base), base);
	}
	else if (big_nb >= 0 && big_nb < ft_strlen(base))
	{
		ft_put_char(base[big_nb]);
	}
	else if (big_nb < 0)
	{
		ft_put_char('-');
		ft_putnbr_base((-1 * big_nb), base);
	}
	else if (big_nb > ft_strlen(base) - 1)
	{
		ft_putnbr_base((big_nb / ft_strlen(base)), base);
		ft_putnbr_base((big_nb % ft_strlen(base)), base);
	}
}

// int	main()
// {
// 	ft_putnbr_base(41, "105f");
// }