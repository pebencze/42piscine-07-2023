/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:11:15 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/05 16:45:51 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);
int	ft_invalid_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		digit;
	long	nb;

	nb = nbr;
	size = ft_strlen(base);
	if (ft_invalid_base(base) == 0)
	{
		if (nb < 0)
		{
			nb *= -1;
			write (1, "-", 1);
		}
		digit = nb % size;
		if (nb >= size)
			ft_putnbr_base((nb / size), base);
		write(1, &(base[digit]), 1);
	}
}

int	ft_strlen(char *str)
{
	char	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	ft_invalid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 0)
		return (1);
	while (base[i])
	{
		if (ft_strlen(base) < 2)
			return (1);
		else if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (1);
				j++;
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    char base_hex[] = "0123456789ABCDEF";
    char base_bin[] = "01";
    char base_invalid[] = "0123456701";
    char base_empty[] = "";
    char base_single[] = "0";
    int number = 12345;

    printf("Decimal %i in Hexadecimal: ", number);
	printf("\n");
	ft_putnbr_base(number, base_hex);
	printf("\n");

    printf("Decimal %i in Binary: ", number);
	printf("\n");
    ft_putnbr_base(number, base_bin);
	printf("\n");


    printf("Decimal %i in Invalid Base: ", number);
	printf("\n");
    ft_putnbr_base(number, base_invalid);
	printf("\n");


    printf("Decimal %i in Empty Base: ", number);
	printf("\n");
    ft_putnbr_base(number, base_empty);
	printf("\n");


    printf("Decimal %i in Single Digit Base: ", number);
	printf("\n");
    ft_putnbr_base(number, base_single);
	printf("\n");

    return (0);
}
*/
