/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:50:30 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:52:25 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	while (i < size)
	{
		k = 0;
		while (k < (size - 1))
		{
			if (tab[k] > tab[k + 1])
			{
				temp = tab[k];
				tab[k] = tab [k + 1];
				tab[k + 1] = temp;
				k++;
			}
			else
			{
				k++;
			}
		}
		i++;
	}
}
