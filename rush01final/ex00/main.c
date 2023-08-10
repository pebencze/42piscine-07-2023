/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:54:21 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/30 21:00:51 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	to compile:
	cc -Wall -Wextra -Werror *.c -o rush-01
	to run:
	./test.sh
*/

#include <unistd.h>
#include <stdlib.h>

int		solve(int **table);

void	table_values(int **table, char *str)
{
	table[0][1] = str[0];
	table[0][2] = str[1];
	table[0][3] = str[2];
	table[0][4] = str[3];
	table[5][1] = str[4];
	table[5][2] = str[5];
	table[5][3] = str[6];
	table[5][4] = str[7];
	table[1][0] = str[8];
	table[2][0] = str[9];
	table[3][0] = str[10];
	table[4][0] = str[11];
	table[1][5] = str[12];
	table[2][5] = str[13];
	table[3][5] = str[14];
	table[4][5] = str[15];
}

int	parse(char *s, int **table)
{
	int		i;
	int		j;
	char	str[16];

	i = 0;
	while (s[i])
		i ++;
	if (i != 31) 
		return (1);
	i = 0;
	j = 0;
	while (s[i] < 53 && s[i] > 48 && (s[i + 1] == 32 || s[i + 1] == 0))
	{
		str[j] = (s[i] - 48);
		i += 2;
		j ++;
	}
	if (j != 16)
		return (1);
	table_values(table, str);
	return (0);
}

int	main(int argc, char **argv)
{
	int	**table;
	int	r;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	table = (int **)malloc(6 * 8);
	r = 0;
	while (r < 6)
	{
		table[r] = (int *)malloc(6 * 4);
		r ++;
	}
	r = parse(argv[1], table);
	if (r == 1 || solve(table) == 0)
		write(1, "Error\n", 6);
	r = 0;
	while (r < 6)
		free(table[r ++]);
	free(table);
	return (0);
}
