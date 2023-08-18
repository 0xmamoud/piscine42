/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:22:58 by mkane             #+#    #+#             */
/*   Updated: 2023/08/14 19:23:01 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strslen(char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			k++;
		}
			k += ft_len(sep);
		i++;
	}
	k -= ft_len(sep);
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	k = 0;
	dest = NULL;
	if (size == 0)
		return (dest);
	dest = (char *) malloc(sizeof(char) * ft_strslen(strs, sep, size) + 1);
	if (!(dest))
		return (dest);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i + 1 < size)
			dest[k++] = sep[j++];
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *test[] = {"hello", "", "sdasd", "abc"};
// 	int size = 4;
// 	char *sep = "--";
// 	char *dest = ft_strjoin(size, test, sep);
// 	printf("%s", dest);
// 	free(dest);
// }