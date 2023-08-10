/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:13:03 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/09 13:42:52 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int *arr = NULL;
	int i;

	int size = ft_ultimate_range(&arr, 1, 6);

	if (size == -1)
		return (1);
	i = 0;
	while (i < size)
	{
		printf("%d \n", arr[i]);
		i++;
	}
	printf("%i", size);
	free(arr);
	return (0);
}
*/
