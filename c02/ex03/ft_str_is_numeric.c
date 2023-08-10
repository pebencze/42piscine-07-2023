/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:49:36 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/25 15:46:13 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((47 < str[i] && str[i] < 58))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
 #include <stdio.h>

 int	main()
 {
	printf("%d", ft_str_is_numeric("0788948263"));
	printf("%d", ft_str_is_numeric("07889 4657"));
	printf("%d", ft_str_is_numeric(""));
	return (0);
 }
 */
