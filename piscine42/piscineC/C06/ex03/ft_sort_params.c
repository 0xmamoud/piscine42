/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:48:29 by mkane             #+#    #+#             */
/*   Updated: 2023/08/10 21:48:32 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_params(char **argv1, char **argv2)
{
	char	*temp;

	temp = *argv2;
	*argv2 = *argv1;
	*argv1 = temp;
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	position;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		k = 0;
		while (argv[i][k] && argv[j][k] && argv[i][k] == argv[j][k])
			k++;
		position = argv[i][k] - argv[j][k];
		if (position > 0)
		{
			ft_swap_params(&argv[i], &argv[j]);
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
