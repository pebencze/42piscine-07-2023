/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:48:12 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/22 22:06:51 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char p);

void	ft_first_row(int c, int x)
{
	if (c == 0 || c == (x - 1))
	{
		ft_putchar('o');
	}
	else if (c == x)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('-');
	}
}

void	ft_middle_row(int c, int x)
{
	if (c == 0 || c == (x - 1))
	{
		ft_putchar('|');
	}
	else if (c == x)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(32);
	}
}

void	ft_last_row(int c, int x)
{
	if (c == 0 || c == (x - 1))
	{
		ft_putchar('o');
	}
	else if (c == x)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 0;
	while (r < y && r >= 0)
	{
		c = 0;
		while (c <= x && c >= 0)
		{
			if (r == 0)
			{
				ft_first_row(c, x);
			}
			else if (r > 0 && r < (y - 1))
			{
				ft_middle_row(c, x);
			}
			else
			{
				ft_last_row(c, x);
			}
			c++;
		}
		r++;
	}
}
