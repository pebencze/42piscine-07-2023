/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:32:33 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/31 17:21:10 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux_fill_row(int step, int **table, int op);

int		aux_filler_versions(int a, int b); // a and b being extremities at r or c

int		aux_step(int step, int **table);

int		aux_check_columns(int **table);

void	show_table(int ** table, int md);

#include <unistd.h>

// returns 0 if no solution, 1 if solution found and printed
int	aux_step(int step, int **table)
{
	int	ops;
	int	res;
	char sc = '0' + step;
	write(1, &sc, 1);
	write(1, "\n", 1);
	show_table(table, 0);
	write(1, "\n", 1);

	if (step == 5)
		return (aux_check_columns(table));
	ops = aux_filler_versions(table[step][0], table[step][5]);
	if (ops == 0)
		return (0);
	while (ops)
	{
		aux_fill_row(step, table, --ops);
		res = aux_step(step + 1, table);
		if (res == 1)
			return (1);
	}
	return (0);
}

int	solve(int **table)
{
	return (aux_step(1, table));
}
