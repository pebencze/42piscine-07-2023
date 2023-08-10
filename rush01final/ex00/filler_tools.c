/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:53:59 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/30 15:54:13 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux_get_filler_23(int ver, int vals[]);
void	aux_get_filler_22(int ver, int vals[]);
void	aux_get_filler_13(int ver, int vals[]);
void	aux_get_filler_12(int ver, int vals[]);
void	aux_multi_assign(int vals[], int digits);

int	aux_code(int a, int b)
{
	int	t;

	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	return (a * 10 + b); 
}

void	aux_get_filler(int c, int ver, int vals[])
{
	if (c == 23) 
		aux_get_filler_23(ver, vals);
	else if (c == 22) 
		aux_get_filler_22(ver, vals);
	else if (c == 13) 
		aux_get_filler_13(ver, vals);
	else if (c == 12) 
		aux_get_filler_12(ver, vals);
	else
		aux_multi_assign(vals, 4321); 
}

int	aux_filler_versions(int a, int b)
{
	int	c;

	c = aux_code(a, b);
	if (c == 23 || c == 13)
		return (3);
	if (c == 22)
		return (6);
	if (c == 12)
		return (2);
	if (c == 14)
		return (1);
	return (0);
}

void	aux_fill_row(int step, int **table, int op)
{
	int	vals[4];
	int	rev;
	int	a;
	int	b;

	a = table[step][0];
	b = table[step][5];
	rev = 0;
	if (a > b)
		rev = 1;
	aux_get_filler(aux_code(a, b), op, vals);
	if (rev)
	{
		table[step][1] = vals[3];
		table[step][2] = vals[2];
		table[step][3] = vals[1];
		table[step][4] = vals[0];
	}
	else
	{
		table[step][1] = vals[0];
		table[step][2] = vals[1];
		table[step][3] = vals[2];
		table[step][4] = vals[3];
	}
}
