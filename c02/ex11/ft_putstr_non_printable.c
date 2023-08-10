/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:40:14 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/26 13:27:32 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	h1;
	char	h2;
	char	*hexas;
	int		i;

	hexas = "0123456789abcdefg";
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			h1 = hexas[(str[i] / 16)];
			h2 = hexas[(str[i] % 16)];
			write(1, "\\", 1);
			write(1, &h1, 1);
			write(1, &h2, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*str;
	str = "ab\ncc\0";
	/
	char str = {1, 127, 45, 9, 17, 0};
	str[1] = 1;
	str[2] = 0;
	str[3] = 127;
	str[4] = 34;
	str[5] = 97;
	str[6] = 126;
	/
	ft_putstr_non_printable(str);
	return (0);
}
*/
