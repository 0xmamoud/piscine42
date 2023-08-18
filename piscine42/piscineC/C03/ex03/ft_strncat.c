/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:34:12 by mkane             #+#    #+#             */
/*   Updated: 2023/08/07 15:34:16 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	i = 0;
	while (i < lensrc && i < nb)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}

// int main()
// {
// 	char src[] = "wolrd ";
// 	char dest[100] = "hello ";
// 	ft_strncat(dest, src, 2);
// 	// strncat(dest, src, 2);
// 	printf("%s\n", dest);
// 	printf("TEST2\n");
// 	ft_strncat(src, dest, 4);
// 	// strncat(src, dest, 4);
// 	printf("%s\n", src);
// }