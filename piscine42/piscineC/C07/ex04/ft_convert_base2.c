/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:48:29 by mkane             #+#    #+#             */
/*   Updated: 2023/08/15 14:48:32 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_is_str_ok(char *str);

int	ft_atoi_base(char *str, char *base);

int	ft_nbrlen(int nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base, char *tab)
{
	long long	big_nb;
	int			i;

	big_nb = nbr;
	i = 0;
	tab = (char *) malloc(sizeof(char) * ft_nbrlen(nbr) + 2);
	if (!ft_is_str_ok(base))
		return (0);
	if (nbr < 0)
		big_nb = -big_nb;
	while (big_nb > 0)
	{
		tab[i] = base[big_nb % ft_strlen(base)];
		i++;
		big_nb /= 10;
	}
	if (nbr < 0)
		tab[i] = '-';
	tab[i + 1] = '\0';
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*convert;
	char	temp;
	int		i;

	i = 0;
	convert = NULL;
	if (!ft_is_str_ok(base_from) && !ft_is_str_ok(base_to))
		return (convert);
	convert = ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, convert);
	if (convert == 0)
		return (0);
	while (i < (ft_strlen(convert) - 1) / 2)
	{
		temp = convert[i];
		convert[i] = convert[ft_strlen(convert) - 1 - i];
		convert[ft_strlen(convert) - 1 - i] = temp;
		i++;
	}
	return (convert);
}

// 	int main()
// {
// 	char *test = " ----+---+123456789ppab567";
// 	printf("%s", ft_convert_base(test, "0123456789", "0123456789"));

// 	free(ft_convert_base(test, "0123456789", "0123456789"));
// }