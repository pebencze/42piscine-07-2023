/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:00:16 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:56:15 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);

	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
