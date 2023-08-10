/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:22:48 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/06 19:37:43 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	first;
	long	mid;
	long	last;

	first = 0;
	last = nb;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			first = mid + 1;
		else if (mid * mid > nb)
			last = mid - 1;
	}
	return (0);
}
/*
//binary search
#include <stdio.h>

int	main(void)
{
	int	num;

	printf("Enter a number: ");
	scanf("%i", &num);
	printf("The sqrt of %i is %i.", num, ft_sqrt(num));
	return (0);
}
*/
