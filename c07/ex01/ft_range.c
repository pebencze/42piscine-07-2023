/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:30:01 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:55:53 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}
