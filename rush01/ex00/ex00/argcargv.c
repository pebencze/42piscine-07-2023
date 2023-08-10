/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcargv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:02:37 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/29 16:16:08 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		argc;
char	**argv;
int		i;
int 	j;
char	*str;

if (argc == 2)
	while (argv[1][i])
		i++;
	if (i == 31)
		{
			i = 0;
			j = 0;
			while ((argv[1][i] <= 52 && argv[1][i] >= 49) && ((argv[1][i+1] == 32)) || (argv[1][i+1] == '\0'))
			{
				str[j] = (argv[1][i] - 48);
				i += 2;
				j++;
			}
			return (str);
		}

//else
//	write (1, "Error\n", 6);
//	return (0);

int **table_values(int **table, char *str)
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
	return (table);
}
