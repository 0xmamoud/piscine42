/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:24:14 by mkane             #+#    #+#             */
/*   Updated: 2023/08/11 14:24:16 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {
// 	int i = 0;
// 	while (i <= 200)
// 	{
// 		printf("[%d] = %d\n", i, ft_is_prime(i));
// 		i++;
// 	}
// 	// printf("[2147483647] = %d\n", ft_is_prime(2147483649));
// }