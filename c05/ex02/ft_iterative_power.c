/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:15:45 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/07 20:21:35 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	power;
	int	nb;
	int	result;

	printf("Put a number: ");
	scanf("%i", &nb);
	printf("Put a power: ");
	scanf("%i", &power);

	result = ft_iterative_power(nb, power);
	printf("Result is: %i", result);
	return (0);
}
*/
