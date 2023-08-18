/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 23:48:21 by mkane             #+#    #+#             */
/*   Updated: 2023/08/11 23:50:28 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = (int *) malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

// #include <stdio.h>
// #include <unistd.h>
// int main(void)
// {
// 	int *test = ft_range(30,10);
// 	int i = 0;
// 	while (test[i])
// 	{
// 		printf("%d ", test[i]);
// 		i++;
// 	}
// 	free(test);
// }