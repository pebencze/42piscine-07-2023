/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:35:22 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/06 16:37:19 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc)
	{
		i = 0;
		while (argv[0][i])
		{
			write (1, &argv[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
