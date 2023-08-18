/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:58:23 by mkane             #+#    #+#             */
/*   Updated: 2023/08/08 12:58:36 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	i = 0;
	if (size > 0)
	{
		while (lendest + i < (size - 1) && src[i])
		{
			dest[lendest + i] = src[i];
			i++;
		}
	}
	dest[lendest + i] = '\0';
	if (size < lendest)
		return (lensrc + size);
	else
		return (lendest + lensrc);
}

// int main()
// {
// 	char src[] = "wolrdhello";
// 	char dest[25] = "hello ";
// 	// ft_strlcat(dest, src, 25);
// 	// printf("%d\n", ft_strlcat(dest, src, 25));
// 	// printf("%s\n", dest);
// 	// printf("VRAI FONCTION\n");
// 	strlcat(dest, src, 25);
// 	printf("%ld\n", strlcat(dest, src, 25));
// 	printf("%s\n", dest);
// }