/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:36:31 by mkane             #+#    #+#             */
/*   Updated: 2023/08/07 15:37:01 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_srclen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;

	lensrc = ft_srclen(src);
	lendest = ft_srclen(dest);
	i = 0;
	while (i < lensrc)
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
// 	// ft_strcat(dest, src);
// 	strcat(dest, src);
// 	printf("%s\n", dest);
// 	printf("TEST2\n");
// 	// ft_strcat(src, dest);
// 	strcat(src, dest);
// 	printf("%s\n", src);
// }