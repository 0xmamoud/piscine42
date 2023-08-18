/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:38:14 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/05 11:38:17 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ligne(int x, char a, char b, char c)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(a);
		else
		{
			if (i == x)
				ft_putchar(c);
			else
				ft_putchar(b);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		if (i == 1)
			ligne(x, 'A', 'B', 'A');
		else
		{
			if (i == y)
				ligne(x, 'C', 'B', 'C');
			else
				ligne(x, 'B', ' ', 'B');
		}
		i++;
	}
}
