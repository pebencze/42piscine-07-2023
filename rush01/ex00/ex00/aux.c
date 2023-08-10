/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:07:50 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/29 15:21:36 by inikulin         ###   ########.fr       */
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

void	aux_print_cell(int **table, int r, int c)
{
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
			write(1, " ", 1);
	}
}

void	show_table(int **table)
{
	int		r;
	int		c;
	char	sym;

	r = 0;
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			aux_print_cell(table, r, c);
			c ++;
		}
		write(1, "\n", 1);
		r ++;
	}
}
