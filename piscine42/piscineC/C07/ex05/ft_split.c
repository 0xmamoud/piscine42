/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:56:53 by mkane             #+#    #+#             */
/*   Updated: 2023/08/16 20:56:55 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_find_charset(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!ft_find_charset(str[i], charset))
		i++;
	return (i);
}

int	ft_nbrline(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_find_charset(str[i], charset)
			&& ft_find_charset(str[i + 1], charset))
			count++;
		i++;
	}
	return (count + 1);
}

void	ft_copy(char **dest, char *src, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (src[i])
	{
		while (ft_find_charset(src[i], charset))
			i++;
		j = 0;
		dest[k] = malloc(sizeof(char) * (ft_strlen(&src[i], charset)) + 1);
		while (src[i] && !ft_find_charset(src[i], charset))
		{
			dest[k][j] = src[i];
			i++;
			j++;
		}
		dest[k][j] = '\0';
		k++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;

	dest = malloc(sizeof(char *) * ft_nbrline(str, charset) + 1);
	dest[ft_nbrline(str, charset)] = 0;
	ft_copy(dest, str, charset);
	return (dest);
}

// int main(void)
// {
// 	char test[] = "hello-world!salut ca-va !-
// 	ca dit quoi merci jawa le boss de 42 123";
// 	char *charset = "- !";
// 	char **dest;
// 	dest = ft_split(test, charset);
// 	int	j;
// 	j = 0;
// 	while (j < ft_nbrline(test, charset))
// 	{
// 		printf("%s\n", dest[j]);
// 		j++;
// 	}
// 	free(dest);
// }
