/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:54:21 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/29 15:23:45 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	to compile:
	cc -Wall -Wextra -Werror *.c
	to run:
	./a.out
   */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		solve(int **table);
void	show_table(int **table);

void	test_table(int **table)
{
	table[0][1] = 4;
	table[0][2] = 3;
	table[0][3] = 2;
	table[0][4] = 1;
	table[5][1] = 1;
	table[5][2] = 2;
	table[5][3] = 2;
	table[5][4] = 2;
	table[1][0] = 4;
	table[2][0] = 3;
	table[3][0] = 2;
	table[4][0] = 1;
	table[1][5] = 1;
	table[2][5] = 2;
	table[3][5] = 2;
	table[4][5] = 2;
}

int	main(int argc, char **argv)
{
	int	**table;
	int	r;

	table = (int **)malloc(6 * 8);
	r = 0;
	while (r < 6)
	{
		table[r] = (int *)malloc(6 * 4);
		r ++;
	}
	// TODO: take values from argv
	(void)argc;
	(void)argv;
	test_table(table);
	show_table(table);
	if (solve(table) == 0)
		write(1, "Error\n", 6);
	return (0);
}
