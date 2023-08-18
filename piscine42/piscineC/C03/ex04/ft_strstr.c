/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:51:58 by mkane             #+#    #+#             */
/*   Updated: 2023/08/07 20:51:59 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *str, char *to_find, int j)
{
	int	i;
	int	len_find;

	i = 0;
	len_find = ft_strlen(to_find);
	while (str[j + i] && str[j + i] == to_find[i])
	{
		i++;
	}
	if (i != len_find)
	{
		return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(str, to_find, i))
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char find[] = "azerti";
// 	char src[] = "hellowohellohelloworldazertiworldhello";
// 	char *test = ft_strstr(src, find);
// 	printf("%s",test);
// }