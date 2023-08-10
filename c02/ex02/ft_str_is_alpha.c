/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:02:53 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/27 11:28:24 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((64 < str[i] && str[i] < 91)
			|| (96 < str[i] && str [i] < 123))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_alpha("Testingza"));
	printf("%d", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("Testing za"));
	printf("%d", ft_str_is_alpha("Testingza!"));
	return (0);
}
*/
