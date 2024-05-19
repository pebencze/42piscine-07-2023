/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:36:31 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:54:21 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	atoi_value;

	i = 0;
	sign = 1;
	atoi_value = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi_value = atoi_value * 10;
		atoi_value += (str[i] - 48);
		i++;
	}
	return (atoi_value * sign);
}
