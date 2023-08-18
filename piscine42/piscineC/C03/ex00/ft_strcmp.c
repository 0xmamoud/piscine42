/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:45:43 by mkane             #+#    #+#             */
/*   Updated: 2023/08/06 19:45:45 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main() {
// char	str1[] = "ABC";
// char	str2[] = "ABC";
// char	str3[] = "AB";
// char	str4[] = "ABZ";

// printf("TEST1\n");
// printf("%d\n", ft_strcmp(str1, str2));
// printf("%d\n", strcmp(str1, str2));
// printf("TEST2\n");
// printf("%d\n", ft_strcmp(str1, str3));
// printf("%d\n", strcmp(str1, str3));
// printf("TEST3\n");
// printf("%d\n", ft_strcmp(str3, str4));
// printf("%d\n", strcmp(str3, str4));
// }