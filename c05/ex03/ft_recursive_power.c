/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:39:32 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/07 20:23:03 by pbencze          ###   ########.fr       */
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
/*
#include <stdio.h>

int main(void)
{
	int	nb;
	int	power;

	printf("Put a number: ");
	scanf("%i", &nb);
	printf("Put a power: ");
	scanf("%i", &power);
	printf("%i", ft_recursive_power(nb, power));
	return (0);
}
*/
