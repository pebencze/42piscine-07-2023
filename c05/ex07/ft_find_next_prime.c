/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:18:25 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/07 20:34:54 by pbencze          ###   ########.fr       */
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
	else if (!(nb % 2) || !(nb % 3))
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	i = nb + 1;
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	printf("Enter a number: ");
	scanf("%i", &nb);
	printf("The next prime is: %i", ft_find_next_prime(nb));
	return (0);
}
*/
