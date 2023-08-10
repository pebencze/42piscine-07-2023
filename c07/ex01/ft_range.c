/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:30:01 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/09 13:28:04 by pbencze          ###   ########.fr       */
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
/*
#include <stdio.h>
//tab = (int *)malloc((max - min) * sizeof(int))
//sizeof(int) important!! (4)
int main()
{
    int min = -10;
    int max = 10;
    int *result = ft_range(min, max);

    if (result != NULL)
    {
        for (int i = 0; i < max - min; i++)
            printf("%d\n", result[i]);
        free(result);
	}
    return (0);
}
*/
