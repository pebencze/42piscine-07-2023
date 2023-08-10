/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:12:28 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/25 16:20:47 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((64 < str[i] && str [i] < 91))
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
	printf("%d", ft_str_is_uppercase("SALFHKLFHZ"));
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("Testing za"));
	printf("%d", ft_str_is_uppercase("testingza!"));
	return (0);
}
*/
