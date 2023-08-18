/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:53:13 by mkane             #+#    #+#             */
/*   Updated: 2023/08/09 11:53:19 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	char_to_int;

	i = 0;
	char_to_int = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		char_to_int *= 10;
		char_to_int += (str[i] - 48);
		i++;
	}
	return (sign * char_to_int);
}

// int main()
// {
// 	char *test = " ---+---+1234ab567";
// 	printf("%d", ft_atoi(test));
// }