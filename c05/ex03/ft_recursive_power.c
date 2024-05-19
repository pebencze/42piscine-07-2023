/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:39:32 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:54:55 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	if (power > 0)
	{
		result *= nb * ft_recursive_power(nb, (power - 1));
	}
	return (result);
}
