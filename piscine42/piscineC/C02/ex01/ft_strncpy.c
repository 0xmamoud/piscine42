/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:22:36 by mkane             #+#    #+#             */
/*   Updated: 2023/08/04 12:22:38 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char	str1 [] = "ABC";
	char	str2 [] = "DEF";
	char	str3 [] = "AB";
	char	str4 [] = "DEFGh";
	char	str5 [] = "";

	printf("test!\n");
	printf("%s\n",ft_strncpy(str1, str2, 2));
	printf("%s\n",strncpy(str1, str2, 2));
	printf("test2\n");
	printf("%s\n",ft_strncpy(str1, str3, 2));
	printf("%s\n",strncpy(str1, str3, 2));
	printf("test3\n");
	printf("%s\n",ft_strncpy(str5, str1, 2));
	printf("%s\n",strncpy(str5, str1, 2));
}