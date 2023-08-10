/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:28:52 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/29 12:52:13 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int * line;
	line = (int*)malloc(5 * sizeof(int));




	int **table;

	table = (int**)malloc(6 * sizeof(int*));
	for (int r = 0; r < 6; r ++)
	{
		table[r] = (int*)malloc(6 * sizeof(int));
	}
	for (int r = 0; r < 6; r ++)
	{
		for (int c = 0; c < 6; c ++)
		{
			table[r][c] = r * 10 + c;
			//*(*(*table + r) + c) = r * 10 + c;
		}
	}
	for (int r = 0; r < 6; r ++)
	{
		for (int c = 0; c < 6; c ++)
		{
			printf("%02d ", table[r][c]);
		}
		printf("\n");
	}
	for (int r = 0; r < 6; r ++)
	{
		free(table[r]);
	}
	
	free(table);
}
