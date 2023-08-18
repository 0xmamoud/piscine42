/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:09:15 by mkane             #+#    #+#             */
/*   Updated: 2023/08/10 11:09:17 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_base_finder(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_char_conv(char str, char *base)
{
	int	j;

	j = 0;
	while (str != base[j])
		j++;
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	to_int;

	i = 0;
	to_int = 0;
	sign = 1;
	if (!ft_is_str_ok(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_base_finder(str[i], base))
	{
		to_int = (to_int * ft_strlen(base) + ft_char_conv(str[i], base));
		i++;
	}
	return (sign * to_int);
}

// int main()
// {
// 	char *test = " ----+--+001100ppab567";
// 	printf("%d", ft_atoi_base(test, "01"));
// }	