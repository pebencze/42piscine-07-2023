/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:32:33 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/30 21:07:15 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux_fill_row(int step, int **table, int op);

int		aux_filler_versions(int a, int b);

int		aux_step(int step, int **table);

int		aux_check_columns(int **table);

// returns 0 if no solution, 1 if solution found and printed
int	aux_step(int step, int **table)
{
	int	ops;
	int	res;

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
