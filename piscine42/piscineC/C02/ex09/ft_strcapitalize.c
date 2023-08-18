/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:56:35 by mkane             #+#    #+#             */
/*   Updated: 2023/08/05 18:56:38 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 48 && str[i - 1] <= 57)
				|| (str[i - 1] >= 97 && str[i - 1] <= 122)
				|| (str[i - 1] >= 65 && str[i - 1] <= 90)))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(test);
// 	printf("%s", test);
// }