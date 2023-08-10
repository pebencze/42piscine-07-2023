/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:04:07 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/26 15:37:23 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
#include <stdio.h>
int	main()
{
	int a;
	int b;
	int *div;
	int *mod;
	int i;
	int j;

	div = &i;
	mod = &j;

	a = 31;
	b = 10;

	ft_div_mod(a, b, div, mod);
	i = i + '0';
    j = j + '0';
	printf("%i", i)
	write("%j", j);
	return (0);
}
*/
