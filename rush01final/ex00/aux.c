/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:07:50 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/30 16:37:05 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	aux_is_corner(int r, int c)
{
	if (r == 0 && c == 0)
		return (1);
	if (r == 0 && c == 5)
		return (1);
	if (r == 5 && c == 0)
		return (1);
	if (r == 5 && c == 5)
		return (1);
	return (0);
}

int	aux_is_border(int r, int c)
{
	if (r == 0 || r == 5)
		return (1);
	if (c == 0 || c == 5)
		return (1);
	return (0);
}

void	aux_print_cell(int **table, int r, int c, int md)
{
	char	sym;

	if (aux_is_corner(r, c))
	{
		write(1, "  ", 2);
	}
	else
	{
		sym = table[r][c] + '0';
		write(1, &sym, 1);
		if (aux_is_border(r, c) == 1)
			write(1, "_", 1);
		else
			if (c != 4 || md == 0)
				write(1, " ", 1);
	}
}

void	show_table(int **table, int md)
{
	int		r;
	int		c;

	r = 0;
	while (r < 6)
	{
		if (md == 1 && (r == 0 || r == 5))
		{
			r ++;
			continue ;
		}
		c = 0;
		while (c < 6)
		{
			if (md == 0 || (c != 0 && c != 5))
				aux_print_cell(table, r, c, md);
			c ++;
		}
		write(1, "\n", 1);
		r ++;
	}
}

// returns 0 if same
int	aux_comp_arr(int a[], int b[], int rev)
{
	if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3])
		if (rev == 0)
			return (0);
	if (a[0] == b[3] && a[1] == b[2] && a[2] == b[1] && a[3] == b[0])
		if (rev == 1)
			return (0);
	return (1);
}
