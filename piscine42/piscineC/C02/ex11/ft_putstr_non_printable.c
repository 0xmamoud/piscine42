/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:23:59 by mkane             #+#    #+#             */
/*   Updated: 2023/08/06 11:24:03 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	*hex;
	int		hex_devider;
	int		hex_moduler;

	hex = "0123456789abcdef";
	hex_devider = c / 16;
	hex_moduler = c % 16;
	ft_put_char('\\');
	ft_put_char(hex[hex_devider]);
	ft_put_char(hex[hex_moduler]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		ft_print_hex(str[0]);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_print_hex(str[i]);
		}
		else
		{
			ft_put_char(str[i]);
		}
		if (str[i + 1] == '\0' && str[i + 2] != '\0')
		{
			ft_put_char('\\');
			ft_put_char('0');
			ft_put_char('0');
			i++;
		}
		i++;
	}
}

// int main()
// {
// 	char test[] = "Coucou\tcomment tu vas";
// 	ft_putstr_non_printable(test);
// }