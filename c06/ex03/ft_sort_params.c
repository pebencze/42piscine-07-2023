/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:56:20 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/06 17:06:40 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_args(int ac, char **av);

int		ft_strcmp(char *s1, char *s2);

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < (ac - 1))
	{
		j = 1;
		while (j < (ac - i))
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				swap = av[j];
				av[j] = av[j + 1];
				av[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	print_args(ac, av);
	return (0);
}

void	print_args(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
