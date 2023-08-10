/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:48:55 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/07 20:14:17 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
/*
#include <stdio.h>

// return 0 if nb == 1 or 0 or is not prime
int main(void)
{
	int	num;

	printf("Enter a number: ");
	scanf("%i", &num);
	if (ft_is_prime(num) == 0)
		printf("%i is not a prime.", num);
	else
		printf("%i is a prime.", num);
	return (0);
}
*/
