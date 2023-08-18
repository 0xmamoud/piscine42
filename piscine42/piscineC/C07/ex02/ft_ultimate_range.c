/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:03:22 by mkane             #+#    #+#             */
/*   Updated: 2023/08/12 13:03:23 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *) malloc(sizeof(int) * (max - min));
	while (i < ((max - min)))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	*range = NULL;
	if (min >= max)
		return (0);
	*range = (int *) malloc(sizeof(int) * size);
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	return (size);
}

// #include <unistd.h>
// #include <stdio.h>
// int main(void)
// {
// 	int *test;
// 	ft_ultimate_range(&test, 20,54);
// 	int i = 0;
// 	while (test[i])
// 	{
// 		printf("|%d|", test[i]);
// 		i++;
// 	}
// 	free(test);
// }