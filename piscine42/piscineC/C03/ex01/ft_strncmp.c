/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:43:57 by mkane             #+#    #+#             */
/*   Updated: 2023/08/07 13:44:00 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
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
// printf("%d\n", ft_strncmp(str1, str2, 1));
// printf("%d\n", strncmp(str1, str2, 1));
// printf("TEST2\n");
// printf("%d\n", ft_strncmp(str1, str3, 2));
// printf("%d\n", strncmp(str1, str3, 2));
// printf("TEST3\n");
// printf("%d\n", ft_strncmp(str3, str4, 3));
// printf("%d\n", strncmp(str3, str4, 3));
// }