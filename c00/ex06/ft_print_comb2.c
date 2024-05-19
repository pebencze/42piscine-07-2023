/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:50:10 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:51:06 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(int i, int j, int k, int l)
{
	while (l <= '9')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &k, 1);
		write(1, &l, 1);
		if (!(k == '9' && l == '9' && i == '9' && j == '8'))
		{
			write(1, ", ", 2);
		}
		l++;
	}
}

void	ft_loop(int i, int j, int k, int l)
{
	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '8')
		{
			k = i;
			while (k <= '9')
			{
				l = j + 1;
				ft_print_digits(i, j, k, l);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	ft_loop(i, j, k, l);
}
