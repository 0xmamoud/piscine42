/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:37:06 by mkane             #+#    #+#             */
/*   Updated: 2023/08/04 10:37:09 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}

// int main()
// {
// 	char	str1 [] = "ABC";
// 	char	str2 [] = "DEF";
// 	char	str3 [] = "AB";
// 	char	str4 [] = "DEFGh";
// 	char	str5 [] = "";

// 	printf("test!\n");
// 	printf("%s\n",ft_strcpy(str1, str2));
// 	printf("%s\n",strcpy(str1, str2));
// 	printf("test2\n");
// 	printf("%s\n",ft_strcpy(str1, str3));
// 	printf("%s\n",strcpy(str1, str3));
// 	printf("test3\n");
// 	printf("%s\n",ft_strcpy(str5, str1));
// 	printf("%s\n",strcpy(str5, str1));
// }