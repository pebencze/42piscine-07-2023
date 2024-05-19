/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:04:49 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:52:18 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	store;
	int	i;
	int	j;

	i = (size - 1);
	j = 0;
	while (j < (size / 2))
	{
		store = tab[i];
		tab[i] = tab[j];
		tab[j] = store;
		i--;
		j++;
	}
}
