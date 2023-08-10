/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:34:50 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/08 16:06:38 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>


int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1)
	    return nb;
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	nb;
	int	factorial;

	printf("Put a number: ");
	scanf("%i", &nb);

	factorial = ft_recursive_factorial(nb);
	printf("Factorial of %i is %i\n", nb, factorial);
	return (0);
}
*/
