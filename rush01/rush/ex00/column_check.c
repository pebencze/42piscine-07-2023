/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:52:44 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/30 18:49:09 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		aux_comp_arr(int a[], int b[], int rev); // returns 0 if same
int		aux_filler_versions(int a, int b);
void	aux_get_filler(int c, int ver, int vals[]);
int		aux_code(int a, int b);
void	show_table(int **table, int mode);

// returns 0 if doesn't fit
int	aux_check_column(int a, int b, int vals[])
{
	int	check[4];
	int	ops;
	int	res;

	ops = aux_filler_versions(a, b); 
	if (ops == 0)
		return (0);
	res = 0;
	while (ops)
	{
		aux_get_filler(aux_code(a, b), --ops, check);
		if (a > b)
			res = aux_comp_arr(vals, check, 1); 
		else
			res = aux_comp_arr(vals, check, 0); 
		if (res == 0)
			return (1);
	}
	return (0);
}

int	aux_check_columns(int **table)
{
	int	c;
	int	vals[4];

	c = 1;
	while (c < 5)
	{
		vals[0] = table[1][c];
		vals[1] = table[2][c];
		vals[2] = table[3][c];
		vals[3] = table[4][c];
		if (aux_check_column(table[0][c], table[5][c], vals) == 0)
			return (0);
		c ++; 
	}
	show_table(table, 1);
	return (1);
}
